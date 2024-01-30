#pragma once

#include "CoreMinimal.h"

struct State {
public:
	State(const char* name) { m_name = name; }

	virtual void start(State* previousState) {};
	virtual State* step() = 0;
	virtual void finish() {};

	const char* getName() { return m_name; }
private:
	const char* m_name;
};


class STATEMACHINETEST_API StateMachine
{
public:
	StateMachine(TArray<State*> states);

	void step();

	void forceState(State* state) { m_forceStateCache = state; }

private:
	TArray<State*> m_states;
	State* m_forceStateCache;
	State* m_currentState;
	State* m_previousState;
};