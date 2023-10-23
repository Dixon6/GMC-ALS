// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSReplicated/Public/ALSBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSBaseCharacter() {}
// Cross Module References
	ALSREPLICATED_API UClass* Z_Construct_UClass_AALSBaseCharacter();
	ALSREPLICATED_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSREPLICATED_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ALSReplicated();
// End Cross Module References
	void AALSBaseCharacter::StaticRegisterNativesAALSBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALSBaseCharacter);
	UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister()
	{
		return AALSBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AALSBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALSCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ALSCharacterMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALSBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSReplicated,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ALSBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "ALS || Rotation" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData[] = {
		{ "Category", "ALS || Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement = { "ALSCharacterMovement", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALSBaseCharacter, ALSCharacterMovement), Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData), Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALSBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALSBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams = {
		&AALSBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AALSBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton, Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AALSBaseCharacter.OuterSingleton;
	}
	template<> ALSREPLICATED_API UClass* StaticClass<AALSBaseCharacter>()
	{
		return AALSBaseCharacter::StaticClass();
	}

	void AALSBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ControlRotation(TEXT("ControlRotation"));

		const bool bIsValid = true
			&& Name_ControlRotation == ClassReps[(int32)ENetFields_Private::ControlRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AALSBaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALSBaseCharacter);
	AALSBaseCharacter::~AALSBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AALSBaseCharacter, AALSBaseCharacter::StaticClass, TEXT("AALSBaseCharacter"), &Z_Registration_Info_UClass_AALSBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALSBaseCharacter), 4114076584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_2123653311(TEXT("/Script/ALSReplicated"),
		Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GMC_ALS_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
