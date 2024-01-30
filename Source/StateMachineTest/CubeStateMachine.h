// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachine.h"
#include "CubeStateMachine.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATEMACHINETEST_API UCubeStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCubeStateMachine();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	StateMachine m_machine;
};
