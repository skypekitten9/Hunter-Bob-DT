#include "HuntActionNode.h"

void HuntActionNode::Enter()
{
	std::cout << "Oh boy! Time to go hunting!\n";
}

void HuntActionNode::Update()
{
	std::cout << "Hunting...\n";
}

void HuntActionNode::Exit()
{
	std::cout << "That's enough hunting for today.\n\n";
}
