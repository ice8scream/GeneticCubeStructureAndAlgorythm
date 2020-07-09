// Fill out your copyright notice in the Description page of Project Settings.


#include "Side.h"

// Sets default values
ASide::ASide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Plates.Init(EPlateColor::PC_Red, 9); // Creating default plate matrix (3*3)
	
	for (int8 x = 0, y = 0, i = 0, j = 1; PlateTrain.Num() < 4; Swap(i, j), j *= -1) {
		uint8 arr[] = { x + y * 3, (x += j) + (y += i) * 3 };
		TArray<uint8> pair;
		pair.Append(arr, 2);
		PlateTrain.AddTail(pair);
		x += j;
		y += i;
	}
	
	
	//for (auto i : PlateTrain) {
	//	UE_LOG(LogTemp, Warning, TEXT("%d %d"), i[0], i[1] );
	//};

	

}

// Called when the game starts or when spawned
void ASide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<uint8> ASide::getEdge(EEdge edgeSide)
{
	TArray<uint8> edge;

	return edge;
}

void ASide::Initialize()
{

}

void ASide::Rotate()
{
}

void ASide::UnRotate()
{
}

