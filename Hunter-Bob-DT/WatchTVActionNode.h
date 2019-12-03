#pragma once
#include "ActionNode.h"
class WatchTVActionNode :
	public ActionNode
{
	void Enter() override;
	void Update() override;
	void Exit() override;
};

