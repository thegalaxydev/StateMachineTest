// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeStateMachine.h"

// Sets default values for this component's properties
UCubeStateMachine::UCubeStateMachine()
{

	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeStateMachine::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCubeStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

