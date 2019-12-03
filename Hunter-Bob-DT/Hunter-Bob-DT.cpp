#include <iostream>
#include "Bob.h"
#include <thread>
#include <chrono>

int main()
{
	Bob bob;
	std::cout << "Welcome to the observatory.\nFile 'HUNTER BOB' has been selected.\nSubject currently asleep.\n";
	while (true)
	{
		bob.Update();
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
