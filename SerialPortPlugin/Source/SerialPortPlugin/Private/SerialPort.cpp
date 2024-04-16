// Fill out your copyright notice in the Description page of Project Settings.


#include "SerialPort.h"
#include <iostream>

SerialPort* SerialPort::instance = nullptr;
bool SerialPort::OpenFlag = false;

SerialPort::SerialPort(const std::string& portName, DWORD baudRate)
    : portName(portName), baudRate(baudRate), hSerial(INVALID_HANDLE_VALUE) {}

SerialPort& SerialPort::GetInstance(const std::string& portName, DWORD baudRate) {
    if (instance == nullptr) {
        instance = new SerialPort(portName, baudRate);
    }
    return *instance;
}

SerialPort::~SerialPort() {
    Close();
}

bool SerialPort::Open() {
    hSerial = CreateFileA(portName.c_str(), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

    if (hSerial == INVALID_HANDLE_VALUE) {
        UE_LOG(LogTemp, Display, TEXT("Failed to open serial port."));
        std::cerr << "Failed to open serial port." << std::endl;
        return false;
    }

    if (!SetSerialConfig()) {
        UE_LOG(LogTemp, Display, TEXT("Failed to set serial port configuration."));
        std::cerr << "Failed to set serial port configuration." << std::endl;
        Close();
        return false;
    }

    return true;
}

void SerialPort::Close() {
    if (hSerial != INVALID_HANDLE_VALUE) {
        CloseHandle(hSerial);
        hSerial = INVALID_HANDLE_VALUE;
    }
}

bool SerialPort::Write(const std::string& data) {
    if (hSerial == INVALID_HANDLE_VALUE) {
        std::cerr << "Serial port is not open." << std::endl;
        return false;
    }

    DWORD bytesWritten;
    if (!WriteFile(hSerial, data.c_str(), static_cast<DWORD>(data.length()), &bytesWritten, NULL)) {
        std::cerr << "Failed to write to serial port." << std::endl;
        return false;
    }

    return true;
}

bool SerialPort::WriteByByte(const std::vector<unsigned char>& data)
{
    // check serial port open
    if (hSerial == INVALID_HANDLE_VALUE) {
        UE_LOG(LogTemp, Display, TEXT("Serial port is not open."));
        std::cerr << "Serial port is not open." << std::endl;
        return false;
    }

    // write data to serial port
    DWORD bytesWritten;
    if (!WriteFile(hSerial, data.data(), static_cast<DWORD>(data.size()), &bytesWritten, NULL)) {
        UE_LOG(LogTemp, Display, TEXT("Failed to write to serial port."));
        std::cerr << "Failed to write to serial port." << std::endl;
        return false;
    }

    // write success
    return true;
}

std::string SerialPort::Read() {
    std::string result;

    if (hSerial == INVALID_HANDLE_VALUE) {
        std::cerr << "Serial port is not open." << std::endl;
        return result;
    }

    const int bufferSize = 1024;
    char buffer[bufferSize];
    DWORD bytesRead;

    if (ReadFile(hSerial, buffer, bufferSize - 1, &bytesRead, NULL)) {
        buffer[bytesRead] = '\0';
        result = buffer;
    }
    else {
        std::cerr << "Failed to read from serial port." << std::endl;
    }

    return result;
}

bool SerialPort::SetSerialConfig() {
    DCB dcbSerialParams = { 0 };

    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    if (!GetCommState(hSerial, &dcbSerialParams)) {
        std::cerr << "Failed to get serial port state." << std::endl;
        return false;
    }

    dcbSerialParams.BaudRate = baudRate;
    dcbSerialParams.ByteSize = 8;
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;

    if (!SetCommState(hSerial, &dcbSerialParams)) {
        std::cerr << "Failed to set serial port state." << std::endl;
        return false;
    }

    COMMTIMEOUTS timeouts = { 0 };
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    if (!SetCommTimeouts(hSerial, &timeouts)) {
        std::cerr << "Failed to set serial port timeouts." << std::endl;
        return false;
    }

    return true;
}
