#include "Goal.h"
#include <iostream>

AGoal::AGoal()
{
}

AGoal::~AGoal()
{
}

void AGoal::Render()
{
	AActor::Render();

	//���
	std::cout << "G" << std::endl;
}
