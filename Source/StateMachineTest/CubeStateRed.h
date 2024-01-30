// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateMachine.h"
/**
 * 
 */
struct STATEMACHINETEST_API CubeStateRed : public State
{
public:
	CubeStateRed() : State("CubeStateRed") {}

	State* step(float dt) override;

private:
	float m_elapsedTime = 0;
};
