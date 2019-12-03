#pragma once
#include <string>
#include <vector>
#include "ForwardDeclaration.h"

class DecisionNode
{
	//Data
protected:
	std::vector<DecisionNode*> nodeList;

	//Functions
public:
	DecisionNode();
	virtual ActionNode* MakeDecision(int time, bool rain) = 0;
	virtual ~DecisionNode() = default;
};

