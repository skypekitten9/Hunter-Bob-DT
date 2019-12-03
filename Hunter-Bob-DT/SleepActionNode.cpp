#include "SleepActionNode.h"

void SleepActionNode::Enter()
{
	std::cout << "Yawn, I should get to bed.\n";
}

void SleepActionNode::Update()
{
	std::cout << "Zzz...\n";
}

void SleepActionNode::Exit()
{
	std::cout << "Woah! That was a great sleep.\n\n";
}
