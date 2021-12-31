// Fill out your copyright notice in the Description page of Project Settings.


#include "ReportObjectName.h"

// Sets default values for this component's properties
UReportObjectName::UReportObjectName()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UReportObjectName::BeginPlay()
{
	Super::BeginPlay();
	FString objectName = GetOwner()->GetName();
	// FString objectPos = GetOwner()->GetActorLocation().ToString();
	FString objectPos = GetOwner()->GetTransform().GetRotation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("Object name is : %s"), *objectName);
	UE_LOG(LogTemp, Warning, TEXT("Object pos is : %s"), *objectPos);


	// ...
	
}


// Called every frame
void UReportObjectName::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

