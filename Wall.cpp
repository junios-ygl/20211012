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
	//��ġ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//���
	std::cout << "#" << std::endl;
}
//
//void AWall::SetLocation(FVector2D NewLocation)
//{
//	Location.X = NewLocation.X;
//	Location.Y = NewLocation.Y;
//}
