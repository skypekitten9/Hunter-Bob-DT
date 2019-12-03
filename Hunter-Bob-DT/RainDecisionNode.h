#pragma once
#include "DecisionNode.h"
class RainDecisionNode :
	public DecisionNode
{
	//Functions
public:
	RainDecisionNode(DecisionNode* trueNode, DecisionNode* falseNode);
	ActionNode* MakeDecision(int time, bool rain) override;
};

