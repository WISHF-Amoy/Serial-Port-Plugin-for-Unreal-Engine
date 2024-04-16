// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SerialPortFunction.generated.h"

/**
 * 
 */
UCLASS()
class SERIALPORTPLUGIN_API USerialPortFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// This function is callable in blueprint

	// FString port:	serial port name, e.g COM3, COM4, COM5
	// FString content:	you can change it to any other type that you want send to the target serial port
	// bool CloseFlag:	flag to close the serial port
	UFUNCTION(BlueprintCallable, Category = "SerialPort")
	static bool SerialPortCommunication(FString port, FString content, bool CloseFlag);

};
