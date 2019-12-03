#pragma once
#include "ActionNode.h"
class SleepActionNode :
	public ActionNode
{
	void Enter() override;
	void Update() override;
	void Exit() override;
};

