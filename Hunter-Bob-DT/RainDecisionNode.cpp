#include "RainDecisionNode.h"

RainDecisionNode::RainDecisionNode(DecisionNode* trueNode, DecisionNode* falseNode)
{
	nodeList.push_back(trueNode);
	nodeList.push_back(falseNode);
}

ActionNode* RainDecisionNode::MakeDecision(int time, bool rain)
{
	if (rain)
	{
		return nodeList[0]->MakeDecision(time, rain);
	}
	else
	{
		return nodeList[1]->MakeDecision(time, rain);
	}
}
