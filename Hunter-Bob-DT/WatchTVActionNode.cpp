#include "WatchTVActionNode.h"

void WatchTVActionNode::Enter()
{
	std::cout << "I'm gonna watch some TV.\n";
}

void WatchTVActionNode::Update()
{
	std::cout << "*flips channel*\n";
}

void WatchTVActionNode::Exit()
{
	std::cout << "There was nothing good on.\n\n";
}
