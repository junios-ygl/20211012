#include "Goal.h"
#include <iostream>
#include <windows.h>

AGoal::AGoal()
{
}

AGoal::~AGoal()
{
}

void AGoal::Render()
{
	//��ġ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//���
	std::cout << "G" << std::endl;
}
