// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#ifndef SERIALPORT_H
#define SERIALPORT_H

#include "CoreMinimal.h"
#include <windows.h>
#include <string>
#include <vector>

/**
 * 
 */
class SERIALPORTPLUGIN_API SerialPort
{
private:
    std::string portName;
    DWORD baudRate;
    HANDLE hSerial;

    SerialPort(const std::string& portName, DWORD baudRate);

    static SerialPort* instance;

    bool SetSerialConfig();
public:
    static SerialPort& GetInstance(const std::string& portName, DWORD baudRate);
    ~SerialPort();

    bool Open();
    void Close();

    bool Write(const std::string& data);
    bool WriteByByte(const std::vector<unsigned char>& data);
    std::string Read();

    static bool OpenFlag;
};

#endif