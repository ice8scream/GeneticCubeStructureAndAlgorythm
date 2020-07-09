// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlateColor.generated.h"
/**
 *
 */
UENUM(BlueprintType)
enum EPlateColor
{
    PC_Red  UMETA(DisplayName = "Red"),
    PC_Orange  UMETA(DisplayName = "Orange"),
    PC_Yellow  UMETA(DisplayName = "Yellow"),
    PC_Green  UMETA(DisplayName = "Green"),
    PC_Blue  UMETA(DisplayName = "Blue"),
    PC_Purple  UMETA(DisplayName = "Purple")
};