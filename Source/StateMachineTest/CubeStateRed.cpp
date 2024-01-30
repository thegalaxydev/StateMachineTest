// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeStateRed.h"

State* CubeStateRed::step(float dt)
{
	m_elapsedTime += dt;

	if (m_elapsedTime >= 5)
	{
		m_elapsedTime = 0;

		return nullptr;
	}

	return nullptr;
}

