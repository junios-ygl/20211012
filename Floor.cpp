#include "Floor.h"
#include <iostream>
#include <windows.h>


AFloor::AFloor()
{
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	//위치지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//출력
	std::cout << " " << std::endl; //2D, 3D advanced
}
