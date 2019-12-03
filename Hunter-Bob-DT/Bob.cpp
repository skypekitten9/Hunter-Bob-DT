#include "Bob.h"

Bob::Bob()
{
	BuildDecisionTree();
	currentActionNode = decisionTree[0]->MakeDecision(bobsClock, CheckWeather());
}

Bob::Bob(int secondsBetweenDecisions)
{
	this->secondsBetweenDecisions = secondsBetweenDecisions;
	BuildDecisionTree();
	currentActionNode = decisionTree[0]->MakeDecision(bobsClock, CheckWeather());
}

void Bob::Update()
{
	elapsedTime = clock();
	bobsClock = (clock() / 1000) % 24;
	bool rain = CheckWeather();

	if ((elapsedTime - timerStart) / 1000 > secondsBetweenDecisions)
	{
		timerStart = clock();
		currentActionNode->Exit();
		std::cout << "Time to make a new decision!\t[" << bobsClock << ":00]\t[RAINING:" << rain << "]\n";
		currentActionNode = decisionTree[0]->MakeDecision(bobsClock, rain);
		currentActionNode->Enter();
	}
	else
	{
		currentActionNode->Update();
	}
}

Bob::~Bob()
{
	for (auto x : decisionTree)
	{
		delete x;
	}
}

void Bob::BuildDecisionTree()
{
	//Actions
	DecisionNode* huntActionNode = new HuntActionNode();
	DecisionNode* watchTVActionNode = new WatchTVActionNode();
	DecisionNode* sleepActionNode = new SleepActionNode();

	//Decisions
	DecisionNode* rainDecisionNode = new RainDecisionNode(watchTVActionNode, huntActionNode);
	DecisionNode* root = new TimeDecisionNode(rainDecisionNode, sleepActionNode);

	decisionTree.push_back(root);
	decisionTree.push_back(rainDecisionNode);
	decisionTree.push_back(huntActionNode);
}

bool Bob::CheckWeather()
{
	return rand() % 3;
}
