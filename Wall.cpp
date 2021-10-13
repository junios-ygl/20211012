#include "Wall.h"
#include <iostream>
#include <windows.h>

AWall::AWall()
{
}

AWall::~AWall()
{
}

void AWall::Render()
{
	AActor::Render();

	//Ãâ·Â
	std::cout << "#" << std::endl;
}
//
//void AWall::SetLocation(FVector2D NewLocation)
//{
//	Location.X = NewLocation.X;
//	Location.Y = NewLocation.Y;
//}
