// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine.h"

/**
 * 
 */
struct STATEMACHINETEST_API DefaultState : public State
{
public:
	DefaultState();

	State* step(float dt) override;
};
