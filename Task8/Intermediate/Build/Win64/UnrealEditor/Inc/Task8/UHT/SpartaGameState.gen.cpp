// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task8/Public/SpartaGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
TASK8_API UClass* Z_Construct_UClass_ASpartaGameState();
TASK8_API UClass* Z_Construct_UClass_ASpartaGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task8();
// End Cross Module References

// Begin Class ASpartaGameState Function AddScore
struct Z_Construct_UFunction_ASpartaGameState_AddScore_Statics
{
	struct SpartaGameState_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameState_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::SpartaGameState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::SpartaGameState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ASpartaGameState Function AddScore

// Begin Class ASpartaGameState Function GetScore
struct Z_Construct_UFunction_ASpartaGameState_GetScore_Statics
{
	struct SpartaGameState_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::SpartaGameState_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::SpartaGameState_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaGameState_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ASpartaGameState Function GetScore

// Begin Class ASpartaGameState Function OnGameOver
struct Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 \xec\x99\x84\xec\xa0\x84\xed\x9e\x88 \xeb\x81\x9d\xeb\x82\xac\xec\x9d\x84 \xeb\x95\x8c (\xeb\xaa\xa8\xeb\x93\xa0 \xeb\xa0\x88\xeb\xb2\xa8 \xec\xa2\x85\xeb\xa3\x8c) \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 \xec\x99\x84\xec\xa0\x84\xed\x9e\x88 \xeb\x81\x9d\xeb\x82\xac\xec\x9d\x84 \xeb\x95\x8c (\xeb\xaa\xa8\xeb\x93\xa0 \xeb\xa0\x88\xeb\xb2\xa8 \xec\xa2\x85\xeb\xa3\x8c) \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaGameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaGameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaGameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaGameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class ASpartaGameState Function OnGameOver

// Begin Class ASpartaGameState
void ASpartaGameState::StaticRegisterNativesASpartaGameState()
{
	UClass* Class = ASpartaGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ASpartaGameState::execAddScore },
		{ "GetScore", &ASpartaGameState::execGetScore },
		{ "OnGameOver", &ASpartaGameState::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaGameState);
UClass* Z_Construct_UClass_ASpartaGameState_NoRegister()
{
	return ASpartaGameState::StaticClass();
}
struct Z_Construct_UClass_ASpartaGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaGameState.h" },
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90\xec\x84\x9c \xec\x8a\xa4\xed\x8f\xb0\xeb\x90\x9c \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x9c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90\xec\x84\x9c \xec\x8a\xa4\xed\x8f\xb0\xeb\x90\x9c \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x9c\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xec\x88\x98\xec\xa7\x91\xed\x95\x9c \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x9c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xec\x88\x98\xec\xa7\x91\xed\x95\x9c \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x9c\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x81 \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\xb4 \xec\x9c\xa0\xec\xa7\x80\xeb\x90\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (\xec\xb4\x88 \xeb\x8b\xa8\xec\x9c\x84)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x81 \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\xb4 \xec\x9c\xa0\xec\xa7\x80\xeb\x90\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (\xec\xb4\x88 \xeb\x8b\xa8\xec\x9c\x84)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xa7\x84\xed\x96\x89 \xec\xa4\x91\xec\x9d\xb8 \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xa7\x84\xed\x96\x89 \xec\xa4\x91\xec\x9d\xb8 \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x84\xec\xb2\xb4 \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\x98 \xea\xb0\x9c\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x84\xec\xb2\xb4 \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\x98 \xea\xb0\x9c\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\xa4\xec\xa0\x9c \xeb\xa0\x88\xeb\xb2\xa8 \xeb\xa7\xb5 \xec\x9d\xb4\xeb\xa6\x84 \xeb\xb0\xb0\xec\x97\xb4. \xec\x97\xac\xea\xb8\xb0 \xec\x9e\x88\xeb\x8a\x94 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa5\xbc \xec\xb0\xa8\xeb\xa1\x80\xeb\x8c\x80\xeb\xa1\x9c \xec\x97\xb0\xeb\x8f\x99\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa4\xec\xa0\x9c \xeb\xa0\x88\xeb\xb2\xa8 \xeb\xa7\xb5 \xec\x9d\xb4\xeb\xa6\x84 \xeb\xb0\xb0\xec\x97\xb4. \xec\x97\xac\xea\xb8\xb0 \xec\x9e\x88\xeb\x8a\x94 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa5\xbc \xec\xb0\xa8\xeb\xa1\x80\xeb\x8c\x80\xeb\xa1\x9c \xec\x97\xb0\xeb\x8f\x99" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaGameState_AddScore, "AddScore" }, // 1459627672
		{ &Z_Construct_UFunction_ASpartaGameState_GetScore, "GetScore" }, // 2374426846
		{ &Z_Construct_UFunction_ASpartaGameState_OnGameOver, "OnGameOver" }, // 2368115338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, LevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDuration_MetaData), NewProp_LevelDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaGameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaGameState_Statics::NewProp_LevelMapNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_Task8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaGameState_Statics::ClassParams = {
	&ASpartaGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaGameState()
{
	if (!Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton, Z_Construct_UClass_ASpartaGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaGameState.OuterSingleton;
}
template<> TASK8_API UClass* StaticClass<ASpartaGameState>()
{
	return ASpartaGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaGameState);
ASpartaGameState::~ASpartaGameState() {}
// End Class ASpartaGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_SpartaGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaGameState, ASpartaGameState::StaticClass, TEXT("ASpartaGameState"), &Z_Registration_Info_UClass_ASpartaGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaGameState), 2962675664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_SpartaGameState_h_3173462678(TEXT("/Script/Task8"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_SpartaGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_SpartaGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
