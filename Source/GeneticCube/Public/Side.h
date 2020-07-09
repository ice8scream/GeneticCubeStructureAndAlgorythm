// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/List.h"
#include "PlateColor.h"
#include "Side.generated.h"

UENUM()
enum EEdge
{
	EDGE_Up UMETA(DisplayName = "Up"),
	EDGE_Down UMETA(DisplayName = "Down"),
	EDGE_Left UMETA(DisplayName = "Left"),
	EDGE_Right UMETA(DisplayName = "Right")
};

UCLASS()
class GENETICCUBE_API ASide : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASide();

	TDoubleLinkedList<TArray<uint8>> PlateTrain;

	TDoubleLinkedList<TArray<uint8>> LineTrain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ICE Cube")
	TArray<TEnumAsByte<EPlateColor>> Plates;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	TArray<uint8> getEdge(EEdge edgeSide);

	void Initialize();

	UFUNCTION(BlueprintCallable, Category = "ICE Cube")
		void Rotate();

	UFUNCTION(BlueprintCallable, Category = "ICE Cube")
		void UnRotate();
//todo think about side position and edge initialisation
};
