#include "TimeDecisionNode.h"

TimeDecisionNode::TimeDecisionNode(DecisionNode* dayTime, DecisionNode* nightTime)
{
	nodeList.push_back(dayTime);
	nodeList.push_back(nightTime);
}

void TimeDecisionNode::SetTime(int dayTimeStart, int nightTimeStart)
{
	this->dayTimeStart = dayTimeStart;
	this->nightTimeStart = nightTimeStart;
}

ActionNode* TimeDecisionNode::MakeDecision(int time, bool rain)
{
	if (time < nightTimeStart && time >= dayTimeStart)
	{
		return nodeList[0]->MakeDecision(time, rain);
	}
	else
	{
		return nodeList[1]->MakeDecision(time, rain);
	}
}
