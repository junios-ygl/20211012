#include "Floor.h"
#include <iostream>

#define SUPER AActor

AFloor::AFloor()
{
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	SUPER::Render();

	//���
	std::cout << " " << std::endl; //2D, 3D advanced
}

