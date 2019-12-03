#pragma once
#include "ActionNode.h"
class HuntActionNode :
	public ActionNode
{
	//Functions
	void Enter() override;
	void Update() override;
	void Exit() override;
};

