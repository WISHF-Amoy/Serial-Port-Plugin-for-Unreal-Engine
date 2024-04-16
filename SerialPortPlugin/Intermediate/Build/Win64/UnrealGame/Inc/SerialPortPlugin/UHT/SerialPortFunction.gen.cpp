// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SerialPortPlugin/Public/SerialPortFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerialPortFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SERIALPORTPLUGIN_API UClass* Z_Construct_UClass_USerialPortFunction();
	SERIALPORTPLUGIN_API UClass* Z_Construct_UClass_USerialPortFunction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SerialPortPlugin();
// End Cross Module References
	DEFINE_FUNCTION(USerialPortFunction::execSerialPortCommunication)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_port);
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_GET_UBOOL(Z_Param_CloseFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USerialPortFunction::SerialPortCommunication(Z_Param_port,Z_Param_content,Z_Param_CloseFlag);
		P_NATIVE_END;
	}
	void USerialPortFunction::StaticRegisterNativesUSerialPortFunction()
	{
		UClass* Class = USerialPortFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SerialPortCommunication", &USerialPortFunction::execSerialPortCommunication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics
	{
		struct SerialPortFunction_eventSerialPortCommunication_Parms
		{
			FString port;
			FString content;
			bool CloseFlag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_port;
		static const UECodeGen_Private::FStrPropertyParams NewProp_content;
		static void NewProp_CloseFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CloseFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialPortFunction_eventSerialPortCommunication_Parms, port), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerialPortFunction_eventSerialPortCommunication_Parms, content), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_CloseFlag_SetBit(void* Obj)
	{
		((SerialPortFunction_eventSerialPortCommunication_Parms*)Obj)->CloseFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_CloseFlag = { "CloseFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialPortFunction_eventSerialPortCommunication_Parms), &Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_CloseFlag_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SerialPortFunction_eventSerialPortCommunication_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SerialPortFunction_eventSerialPortCommunication_Parms), &Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_CloseFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::Function_MetaDataParams[] = {
		{ "Category", "SerialPort" },
		{ "Comment", "// FString port:\x09serial port name, e.g COM3, COM4, COM5\n// FString content:\x09you can change it to any other type that you want send to the target serial port\n// bool CloseFlag:\x09""flag to close the serial port\n" },
		{ "ModuleRelativePath", "Public/SerialPortFunction.h" },
		{ "ToolTip", "FString port:  serial port name, e.g COM3, COM4, COM5\nFString content:      you can change it to any other type that you want send to the target serial port\nbool CloseFlag:       flag to close the serial port" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerialPortFunction, nullptr, "SerialPortCommunication", nullptr, nullptr, Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::PropPointers), sizeof(Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::SerialPortFunction_eventSerialPortCommunication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::Function_MetaDataParams), Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::SerialPortFunction_eventSerialPortCommunication_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USerialPortFunction);
	UClass* Z_Construct_UClass_USerialPortFunction_NoRegister()
	{
		return USerialPortFunction::StaticClass();
	}
	struct Z_Construct_UClass_USerialPortFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerialPortFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SerialPortPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USerialPortFunction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USerialPortFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USerialPortFunction_SerialPortCommunication, "SerialPortCommunication" }, // 500848591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USerialPortFunction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerialPortFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SerialPortFunction.h" },
		{ "ModuleRelativePath", "Public/SerialPortFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerialPortFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerialPortFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USerialPortFunction_Statics::ClassParams = {
		&USerialPortFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USerialPortFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USerialPortFunction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USerialPortFunction()
	{
		if (!Z_Registration_Info_UClass_USerialPortFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USerialPortFunction.OuterSingleton, Z_Construct_UClass_USerialPortFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USerialPortFunction.OuterSingleton;
	}
	template<> SERIALPORTPLUGIN_API UClass* StaticClass<USerialPortFunction>()
	{
		return USerialPortFunction::StaticClass();
	}
	USerialPortFunction::USerialPortFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerialPortFunction);
	USerialPortFunction::~USerialPortFunction() {}
	struct Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_SerialPortPlugin_SerialPortPlugin_HostProject_Plugins_SerialPortPlugin_Source_SerialPortPlugin_Public_SerialPortFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_SerialPortPlugin_SerialPortPlugin_HostProject_Plugins_SerialPortPlugin_Source_SerialPortPlugin_Public_SerialPortFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USerialPortFunction, USerialPortFunction::StaticClass, TEXT("USerialPortFunction"), &Z_Registration_Info_UClass_USerialPortFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USerialPortFunction), 3412530222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_SerialPortPlugin_SerialPortPlugin_HostProject_Plugins_SerialPortPlugin_Source_SerialPortPlugin_Public_SerialPortFunction_h_3938425984(TEXT("/Script/SerialPortPlugin"),
		Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_SerialPortPlugin_SerialPortPlugin_HostProject_Plugins_SerialPortPlugin_Source_SerialPortPlugin_Public_SerialPortFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_SerialPortPlugin_SerialPortPlugin_HostProject_Plugins_SerialPortPlugin_Source_SerialPortPlugin_Public_SerialPortFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
