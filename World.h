#pragma once

#include <vector>
#include "Vector2D.h"
#include "Actor.h"
#include <iostream>
#include <typeinfo>


class APlayer;
class AFloor;
class AWall;
class AGoal;

class UWorld
{
public:
	UWorld();
	~UWorld();

	void Init();
	void Term();

	void Run();

	void AddPlayer(APlayer* NewPlayer);
	void AddWall(AWall* NewWall);
	void AddFloor(AFloor* NewFloor);
	void AddGoal(AGoal* Goal);

private:
	std::vector<AWall*> Walls;
	std::vector<AFloor*> Floors;

	APlayer* Player;
	AGoal* Goal;

	std::vector<AActor*> Actors;

};
