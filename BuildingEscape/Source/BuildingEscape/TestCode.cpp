// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCode.h"

// Sets default values for this component's properties
UTestCode::UTestCode()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTestCode::BeginPlay()
{
	Super::BeginPlay();

	TArray<FString> strArr;
	strArr.Add(TEXT("Hello"));
	strArr.Emplace("World");
	// FString converV = FString::FromInt(strArr.Num());
	FString converV = "start";
	for (auto& Str: strArr)
	{
	UE_LOG(LogTemp, Warning, TEXT("%s is the num"),*Str);
	}
	// ...
	
}


// Called every frame
void UTestCode::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

