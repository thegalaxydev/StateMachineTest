// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachine.h"
#include "DefaultState.h"
StateMachine::StateMachine()
{
	m_states = TArray<State*>({
		new DefaultState()
	});
	m_currentState = m_states[0];
	m_previousState = nullptr;
	m_currentState->start(m_previousState);
}
StateMachine::StateMachine(TArray<State*> states)
{
	m_states = states;
	m_currentState = states[0];
	m_previousState = nullptr;

	m_currentState->start(m_previousState);
}

void StateMachine::step()
{
	State* oldState = m_currentState;
	State* newState = nullptr;

	if (m_forceStateCache != nullptr)
	{
		newState = m_forceStateCache;

		m_forceStateCache = nullptr;
	}
	else
	{
		newState = oldState->step();
	}

	if (newState != nullptr && newState != oldState)
	{
		m_previousState = oldState;
		m_currentState = newState;

		m_previousState->finish();

		m_currentState->start(m_previousState);
	}
}