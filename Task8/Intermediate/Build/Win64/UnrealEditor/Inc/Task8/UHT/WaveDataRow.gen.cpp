// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task8/Public/WaveDataRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveDataRow() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TASK8_API UScriptStruct* Z_Construct_UScriptStruct_FWaveDataRow();
UPackage* Z_Construct_UPackage__Script_Task8();
// End Cross Module References

// Begin ScriptStruct FWaveDataRow
static_assert(std::is_polymorphic<FWaveDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWaveDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveDataRow;
class UScriptStruct* FWaveDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveDataRow, (UObject*)Z_Construct_UPackage__Script_Task8(), TEXT("WaveDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_WaveDataRow.OuterSingleton;
}
template<> TASK8_API UScriptStruct* StaticStruct<FWaveDataRow>()
{
	return FWaveDataRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveDataRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveDataRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "WaveDataRow" },
		{ "ModuleRelativePath", "Public/WaveDataRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_MetaData[] = {
		{ "Category", "WaveDataRow" },
		{ "ModuleRelativePath", "Public/WaveDataRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToSpawn_MetaData[] = {
		{ "Category", "WaveDataRow" },
		{ "ModuleRelativePath", "Public/WaveDataRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveDuration_MetaData[] = {
		{ "Category", "WaveDataRow" },
		{ "ModuleRelativePath", "Public/WaveDataRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveDataRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveDataRow, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_Wave = { "Wave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveDataRow, Wave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_MetaData), NewProp_Wave_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_ItemToSpawn = { "ItemToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveDataRow, ItemToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToSpawn_MetaData), NewProp_ItemToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_WaveDuration = { "WaveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveDataRow, WaveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveDuration_MetaData), NewProp_WaveDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveDataRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_Wave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_ItemToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewProp_WaveDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveDataRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Task8,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WaveDataRow",
	Z_Construct_UScriptStruct_FWaveDataRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataRow_Statics::PropPointers),
	sizeof(FWaveDataRow),
	alignof(FWaveDataRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveDataRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveDataRow()
{
	if (!Z_Registration_Info_UScriptStruct_WaveDataRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveDataRow.InnerSingleton, Z_Construct_UScriptStruct_FWaveDataRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveDataRow.InnerSingleton;
}
// End ScriptStruct FWaveDataRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_WaveDataRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveDataRow::StaticStruct, Z_Construct_UScriptStruct_FWaveDataRow_Statics::NewStructOps, TEXT("WaveDataRow"), &Z_Registration_Info_UScriptStruct_WaveDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveDataRow), 2315303106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_WaveDataRow_h_4248100559(TEXT("/Script/Task8"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_WaveDataRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Simple_Game_Task8_Source_Task8_Public_WaveDataRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
