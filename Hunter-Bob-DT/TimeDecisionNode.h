#pragma once
#include "DecisionNode.h"
class TimeDecisionNode :
	public DecisionNode
{
	//Data
private:
	int dayTimeStart = 8, nightTimeStart = 22;
	//Functions
public:
	TimeDecisionNode(DecisionNode* dayTime, DecisionNode* nightTime);
	void SetTime(int dayTimeStart, int nightTimeStart);
	ActionNode* MakeDecision(int time, bool rain) override;
};

