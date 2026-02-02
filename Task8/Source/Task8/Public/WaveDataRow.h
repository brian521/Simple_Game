// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WaveDataRow.generated.h"


USTRUCT(BlueprintType)
struct FWaveDataRow : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Wave;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ItemToSpawn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float WaveDuration;

};
