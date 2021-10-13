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

	//Ãâ·Â
	std::cout << " " << std::endl; //2D, 3D advanced
}

