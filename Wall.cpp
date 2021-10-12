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
	//위치지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//출력
	std::cout << "#" << std::endl;
}
//
//void AWall::SetLocation(FVector2D NewLocation)
//{
//	Location.X = NewLocation.X;
//	Location.Y = NewLocation.Y;
//}
