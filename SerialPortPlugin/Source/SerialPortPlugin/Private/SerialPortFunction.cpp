// Fill out your copyright notice in the Description page of Project Settings.


#include "SerialPortFunction.h"
#include "SerialPort.h"

bool USerialPortFunction::SerialPortCommunication(FString port, FString content, bool CloseFlag)
{
    std::string PortNameString(TCHAR_TO_UTF8(*port));
    std::string ContentString(TCHAR_TO_UTF8(*content));
    SerialPort& serialPortInstance = SerialPort::GetInstance(PortNameString, CBR_9600);
    if (serialPortInstance.OpenFlag == false) {
        serialPortInstance.OpenFlag = serialPortInstance.Open();
    }
    if (serialPortInstance.OpenFlag) {
        // Send Data
        bool result = serialPortInstance.Write(ContentString);

        if (result == false) {
            UE_LOG(LogTemp, Display, TEXT("Write false"));
            return false;
        }
        UE_LOG(LogTemp, Display, TEXT("Write true"));

        // If CloseFlag is true, than close the SerialPort
        if (CloseFlag)
        {
            serialPortInstance.Close();
            UE_LOG(LogTemp, Display, TEXT("SerialPort Close"));
        }
        return result;
    }
    UE_LOG(LogTemp, Display, TEXT("SerialPort Error"));
	return false;
}
