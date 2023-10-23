// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSReplicated/Public/ALSCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSCharacterMovementComponent() {}
// Cross Module References
	ALSREPLICATED_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent();
	ALSREPLICATED_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ALSReplicated();
// End Cross Module References
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_BrakingFricktionFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Braking_FricktionFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_BrakingFricktionFactor_Implementation(Z_Param_Braking_FricktionFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_GroundFriction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ground_Friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_GroundFriction_Implementation(Z_Param_Ground_Friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_BrakingDecelerationWalking)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Braking_DecelerationWalking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_BrakingDecelerationWalking_Implementation(Z_Param_Braking_DecelerationWalking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_MaxAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MaxAcceleration_Implementation(Z_Param_Max_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_MaxWalkSpeedCrounched)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_WalkSpeedCrounched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MaxWalkSpeedCrounched_Implementation(Z_Param_Max_WalkSpeedCrounched);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execServer_MaxWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_WalkSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MaxWalkSpeed_Implementation(Z_Param_Max_WalkSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetBrakingFricktionFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Braking_FricktionFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakingFricktionFactor(Z_Param_Braking_FricktionFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetGroundFriction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ground_Friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroundFriction(Z_Param_Ground_Friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetBrakingDecelerationWalking)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Braking_DecelerationWalking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakingDecelerationWalking(Z_Param_Braking_DecelerationWalking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetMaxAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAcceleration(Z_Param_Max_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetMaxWalkSpeedCrounched)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_WalkSpeedCrounched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxWalkSpeedCrounched(Z_Param_Max_WalkSpeedCrounched);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSCharacterMovementComponent::execSetMaxWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max_WalkSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxWalkSpeed(Z_Param_Max_WalkSpeed);
		P_NATIVE_END;
	}
	struct ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms
	{
		float Braking_DecelerationWalking;
	};
	struct ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms
	{
		float Braking_FricktionFactor;
	};
	struct ALSCharacterMovementComponent_eventServer_GroundFriction_Parms
	{
		float Ground_Friction;
	};
	struct ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms
	{
		float Max_Acceleration;
	};
	struct ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms
	{
		float Max_WalkSpeed;
	};
	struct ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms
	{
		float Max_WalkSpeedCrounched;
	};
	static FName NAME_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking = FName(TEXT("Server_BrakingDecelerationWalking"));
	void UALSCharacterMovementComponent::Server_BrakingDecelerationWalking(float Braking_DecelerationWalking)
	{
		ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms Parms;
		Parms.Braking_DecelerationWalking=Braking_DecelerationWalking;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking),&Parms);
	}
	static FName NAME_UALSCharacterMovementComponent_Server_BrakingFricktionFactor = FName(TEXT("Server_BrakingFricktionFactor"));
	void UALSCharacterMovementComponent::Server_BrakingFricktionFactor(float Braking_FricktionFactor)
	{
		ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms Parms;
		Parms.Braking_FricktionFactor=Braking_FricktionFactor;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_BrakingFricktionFactor),&Parms);
	}
	static FName NAME_UALSCharacterMovementComponent_Server_GroundFriction = FName(TEXT("Server_GroundFriction"));
	void UALSCharacterMovementComponent::Server_GroundFriction(float Ground_Friction)
	{
		ALSCharacterMovementComponent_eventServer_GroundFriction_Parms Parms;
		Parms.Ground_Friction=Ground_Friction;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_GroundFriction),&Parms);
	}
	static FName NAME_UALSCharacterMovementComponent_Server_MaxAcceleration = FName(TEXT("Server_MaxAcceleration"));
	void UALSCharacterMovementComponent::Server_MaxAcceleration(float Max_Acceleration)
	{
		ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms Parms;
		Parms.Max_Acceleration=Max_Acceleration;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_MaxAcceleration),&Parms);
	}
	static FName NAME_UALSCharacterMovementComponent_Server_MaxWalkSpeed = FName(TEXT("Server_MaxWalkSpeed"));
	void UALSCharacterMovementComponent::Server_MaxWalkSpeed(float Max_WalkSpeed)
	{
		ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms Parms;
		Parms.Max_WalkSpeed=Max_WalkSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_MaxWalkSpeed),&Parms);
	}
	static FName NAME_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched = FName(TEXT("Server_MaxWalkSpeedCrounched"));
	void UALSCharacterMovementComponent::Server_MaxWalkSpeedCrounched(float Max_WalkSpeedCrounched)
	{
		ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms Parms;
		Parms.Max_WalkSpeedCrounched=Max_WalkSpeedCrounched;
		ProcessEvent(FindFunctionChecked(NAME_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched),&Parms);
	}
	void UALSCharacterMovementComponent::StaticRegisterNativesUALSCharacterMovementComponent()
	{
		UClass* Class = UALSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_BrakingDecelerationWalking", &UALSCharacterMovementComponent::execServer_BrakingDecelerationWalking },
			{ "Server_BrakingFricktionFactor", &UALSCharacterMovementComponent::execServer_BrakingFricktionFactor },
			{ "Server_GroundFriction", &UALSCharacterMovementComponent::execServer_GroundFriction },
			{ "Server_MaxAcceleration", &UALSCharacterMovementComponent::execServer_MaxAcceleration },
			{ "Server_MaxWalkSpeed", &UALSCharacterMovementComponent::execServer_MaxWalkSpeed },
			{ "Server_MaxWalkSpeedCrounched", &UALSCharacterMovementComponent::execServer_MaxWalkSpeedCrounched },
			{ "SetBrakingDecelerationWalking", &UALSCharacterMovementComponent::execSetBrakingDecelerationWalking },
			{ "SetBrakingFricktionFactor", &UALSCharacterMovementComponent::execSetBrakingFricktionFactor },
			{ "SetGroundFriction", &UALSCharacterMovementComponent::execSetGroundFriction },
			{ "SetMaxAcceleration", &UALSCharacterMovementComponent::execSetMaxAcceleration },
			{ "SetMaxWalkSpeed", &UALSCharacterMovementComponent::execSetMaxWalkSpeed },
			{ "SetMaxWalkSpeedCrounched", &UALSCharacterMovementComponent::execSetMaxWalkSpeedCrounched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Braking_DecelerationWalking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::NewProp_Braking_DecelerationWalking = { "Braking_DecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms, Braking_DecelerationWalking), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::NewProp_Braking_DecelerationWalking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_BrakingDecelerationWalking", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Braking_FricktionFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::NewProp_Braking_FricktionFactor = { "Braking_FricktionFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms, Braking_FricktionFactor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::NewProp_Braking_FricktionFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_BrakingFricktionFactor", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ground_Friction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::NewProp_Ground_Friction = { "Ground_Friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_GroundFriction_Parms, Ground_Friction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::NewProp_Ground_Friction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_GroundFriction", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_GroundFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_GroundFriction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Acceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::NewProp_Max_Acceleration = { "Max_Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms, Max_Acceleration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::NewProp_Max_Acceleration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_MaxAcceleration", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_WalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::NewProp_Max_WalkSpeed = { "Max_WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms, Max_WalkSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::NewProp_Max_WalkSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_MaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_WalkSpeedCrounched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::NewProp_Max_WalkSpeedCrounched = { "Max_WalkSpeedCrounched", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms, Max_WalkSpeedCrounched), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::NewProp_Max_WalkSpeedCrounched,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "Server_MaxWalkSpeedCrounched", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::PropPointers), sizeof(ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::PropPointers) < 2048);
	static_assert(sizeof(ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics
	{
		struct ALSCharacterMovementComponent_eventSetBrakingDecelerationWalking_Parms
		{
			float Braking_DecelerationWalking;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Braking_DecelerationWalking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::NewProp_Braking_DecelerationWalking = { "Braking_DecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetBrakingDecelerationWalking_Parms, Braking_DecelerationWalking), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::NewProp_Braking_DecelerationWalking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetBrakingDecelerationWalking", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::ALSCharacterMovementComponent_eventSetBrakingDecelerationWalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::ALSCharacterMovementComponent_eventSetBrakingDecelerationWalking_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics
	{
		struct ALSCharacterMovementComponent_eventSetBrakingFricktionFactor_Parms
		{
			float Braking_FricktionFactor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Braking_FricktionFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::NewProp_Braking_FricktionFactor = { "Braking_FricktionFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetBrakingFricktionFactor_Parms, Braking_FricktionFactor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::NewProp_Braking_FricktionFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetBrakingFricktionFactor", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::ALSCharacterMovementComponent_eventSetBrakingFricktionFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::ALSCharacterMovementComponent_eventSetBrakingFricktionFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics
	{
		struct ALSCharacterMovementComponent_eventSetGroundFriction_Parms
		{
			float Ground_Friction;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ground_Friction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::NewProp_Ground_Friction = { "Ground_Friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetGroundFriction_Parms, Ground_Friction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::NewProp_Ground_Friction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetGroundFriction", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::ALSCharacterMovementComponent_eventSetGroundFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::ALSCharacterMovementComponent_eventSetGroundFriction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics
	{
		struct ALSCharacterMovementComponent_eventSetMaxAcceleration_Parms
		{
			float Max_Acceleration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Acceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::NewProp_Max_Acceleration = { "Max_Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetMaxAcceleration_Parms, Max_Acceleration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::NewProp_Max_Acceleration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetMaxAcceleration", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::ALSCharacterMovementComponent_eventSetMaxAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::ALSCharacterMovementComponent_eventSetMaxAcceleration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics
	{
		struct ALSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms
		{
			float Max_WalkSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_WalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_Max_WalkSpeed = { "Max_WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms, Max_WalkSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_Max_WalkSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::ALSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::ALSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics
	{
		struct ALSCharacterMovementComponent_eventSetMaxWalkSpeedCrounched_Parms
		{
			float Max_WalkSpeedCrounched;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_WalkSpeedCrounched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::NewProp_Max_WalkSpeedCrounched = { "Max_WalkSpeedCrounched", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALSCharacterMovementComponent_eventSetMaxWalkSpeedCrounched_Parms, Max_WalkSpeedCrounched), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::NewProp_Max_WalkSpeedCrounched,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement Component" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSCharacterMovementComponent, nullptr, "SetMaxWalkSpeedCrounched", nullptr, nullptr, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::ALSCharacterMovementComponent_eventSetMaxWalkSpeedCrounched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::ALSCharacterMovementComponent_eventSetMaxWalkSpeedCrounched_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALSCharacterMovementComponent);
	UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister()
	{
		return UALSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UALSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeedCrounched_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeedCrounched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBrakingDecelerationWalking_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrakingDecelerationWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGroundFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGroundFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBrakingFricktionFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrakingFricktionFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSReplicated,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingDecelerationWalking, "Server_BrakingDecelerationWalking" }, // 559690442
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_BrakingFricktionFactor, "Server_BrakingFricktionFactor" }, // 3866954196
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_GroundFriction, "Server_GroundFriction" }, // 520471572
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxAcceleration, "Server_MaxAcceleration" }, // 4200607593
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeed, "Server_MaxWalkSpeed" }, // 1948292147
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_Server_MaxWalkSpeedCrounched, "Server_MaxWalkSpeedCrounched" }, // 1070979630
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingDecelerationWalking, "SetBrakingDecelerationWalking" }, // 3955339768
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetBrakingFricktionFactor, "SetBrakingFricktionFactor" }, // 1330770154
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetGroundFriction, "SetGroundFriction" }, // 973478648
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxAcceleration, "SetMaxAcceleration" }, // 775278866
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 3447521029
		{ &Z_Construct_UFunction_UALSCharacterMovementComponent_SetMaxWalkSpeedCrounched, "SetMaxWalkSpeedCrounched" }, // 2440828610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ALSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeed_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeedCrounched_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeedCrounched = { "NewMaxWalkSpeedCrounched", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxWalkSpeedCrounched), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeedCrounched_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeedCrounched_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxAcceleration = { "NewMaxAcceleration", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxAcceleration_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingDecelerationWalking_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingDecelerationWalking = { "NewBrakingDecelerationWalking", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewBrakingDecelerationWalking), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingDecelerationWalking_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingDecelerationWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewGroundFriction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewGroundFriction = { "NewGroundFriction", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewGroundFriction_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewGroundFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingFricktionFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ALSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingFricktionFactor = { "NewBrakingFricktionFactor", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALSCharacterMovementComponent, NewBrakingFricktionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingFricktionFactor_MetaData), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingFricktionFactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxWalkSpeedCrounched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewMaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingDecelerationWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewGroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALSCharacterMovementComponent_Statics::NewProp_NewBrakingFricktionFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALSCharacterMovementComponent_Statics::ClassParams = {
		&UALSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UALSCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALSCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALSCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UALSCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALSCharacterMovementComponent.OuterSingleton;
	}
	template<> ALSREPLICATED_API UClass* StaticClass<UALSCharacterMovementComponent>()
	{
		return UALSCharacterMovementComponent::StaticClass();
	}

	void UALSCharacterMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NewMaxWalkSpeed(TEXT("NewMaxWalkSpeed"));
		static const FName Name_NewMaxWalkSpeedCrounched(TEXT("NewMaxWalkSpeedCrounched"));
		static const FName Name_NewMaxAcceleration(TEXT("NewMaxAcceleration"));
		static const FName Name_NewBrakingDecelerationWalking(TEXT("NewBrakingDecelerationWalking"));
		static const FName Name_NewGroundFriction(TEXT("NewGroundFriction"));
		static const FName Name_NewBrakingFricktionFactor(TEXT("NewBrakingFricktionFactor"));

		const bool bIsValid = true
			&& Name_NewMaxWalkSpeed == ClassReps[(int32)ENetFields_Private::NewMaxWalkSpeed].Property->GetFName()
			&& Name_NewMaxWalkSpeedCrounched == ClassReps[(int32)ENetFields_Private::NewMaxWalkSpeedCrounched].Property->GetFName()
			&& Name_NewMaxAcceleration == ClassReps[(int32)ENetFields_Private::NewMaxAcceleration].Property->GetFName()
			&& Name_NewBrakingDecelerationWalking == ClassReps[(int32)ENetFields_Private::NewBrakingDecelerationWalking].Property->GetFName()
			&& Name_NewGroundFriction == ClassReps[(int32)ENetFields_Private::NewGroundFriction].Property->GetFName()
			&& Name_NewBrakingFricktionFactor == ClassReps[(int32)ENetFields_Private::NewBrakingFricktionFactor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UALSCharacterMovementComponent"));
	}
	UALSCharacterMovementComponent::UALSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSCharacterMovementComponent);
	UALSCharacterMovementComponent::~UALSCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALSCharacterMovementComponent, UALSCharacterMovementComponent::StaticClass, TEXT("UALSCharacterMovementComponent"), &Z_Registration_Info_UClass_UALSCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALSCharacterMovementComponent), 2355132063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_1691706625(TEXT("/Script/ALSReplicated"),
		Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
