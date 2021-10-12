#include <iostream>
#include "Engine.h"

#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Goal.h"

using namespace std;



int main()
{
	APlayer Player;
	AFloor Floor;
	AWall Wall;
	AGoal Goal;

	Player.Render();
	Floor.Render();
	Goal.Render();
	Wall.Render();


	//UEngine* Engine = new UEngine();

	//Engine->Run();

	//delete Engine;

	return 0;
}