#include <iostream>
#include "Engine.h"

#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Goal.h"

using namespace std;




int main()
{
	UEngine Engine;

	Engine.SpawnPlayer(FVector2D(2, 2));
	Engine.SpawnWall(FVector2D(1, 1));
	Engine.SpawnWall(FVector2D(2, 1));
	Engine.SpawnWall(FVector2D(3, 1));
	Engine.SpawnWall(FVector2D(4, 1));
	Engine.SpawnWall(FVector2D(5, 1));
	Engine.SpawnWall(FVector2D(6, 1));
	Engine.SpawnWall(FVector2D(7, 1));
	Engine.SpawnWall(FVector2D(8, 1));
	Engine.SpawnWall(FVector2D(9, 1));
	Engine.SpawnWall(FVector2D(10, 1));
	Engine.SpawnGoal(FVector2D(9, 9));


	Engine.Run();


	return 0;
}