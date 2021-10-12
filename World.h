#pragma once

#include <vector>
#include "Vector2D.h"
#include "Actor.h"
#include <iostream>


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

	template<typename T>
	void CreateActor(FVector2D NewLocation);


	void Run();
private:



	std::vector<AWall*> Walls;
	std::vector<AFloor*> Floors;

	APlayer* Player;
	AGoal* Goal;
};

template<typename T>
void UWorld::CreateActor(FVector2D NewLocation)
{
	AActor* NewActor = new T();
	NewActor->SetLocation(NewLocation);

	std::cout << NewActor << std::endl;
}
