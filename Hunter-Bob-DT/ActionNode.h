#pragma once
#include <iostream>
#include "ForwardDeclaration.h"
#include "DecisionNode.h"
class ActionNode :
	public DecisionNode
{
	//Functions
public:
	ActionNode* MakeDecision(int time, bool rain) override;
	virtual void Enter() = 0;
	virtual void Update() = 0;
	virtual void Exit() = 0;
};

