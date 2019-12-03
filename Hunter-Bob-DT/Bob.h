#pragma once
#include <vector>
#include <iostream>
#include <ctime>
#include "DecisionNode.h"
#include "ActionNode.h"
#include "RainDecisionNode.h"
#include "TimeDecisionNode.h"
#include "HuntActionNode.h"
#include "WatchTVActionNode.h"
#include "SleepActionNode.h"
class Bob
{
	//Data
private:
	std::vector<DecisionNode*> decisionTree;
	ActionNode* currentActionNode;
	clock_t timerStart = clock(), elapsedTime = clock();
    int bobsClock = (clock()/1000) % 24;
	int secondsBetweenDecisions = 5;

	//Functions
public:
	Bob();
	Bob(int secondsBetweenDecisions);
	void Update();
	~Bob();
private:
	void BuildDecisionTree();
	bool CheckWeather();
};

