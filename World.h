#pragma once

#include <vector>

class APlayer;
class AFloor;
class AWall;
class AGoal;

class UWorld
{
public:
	UWorld();
	~UWorld();


	void Run();
private:
	std::vector<AWall*> Walls;
	std::vector<AFloor*> Floors;

	APlayer* Player;
	AGoal* Goal;
};

