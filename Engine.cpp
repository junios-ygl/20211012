#include "Engine.h"
#include "World.h"
#include "Player.h"
#include "Floor.h"
#include "Goal.h"
#include "Wall.h"

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Run()
{
	World->Run();
}

void UEngine::SpawnPlayer(FVector2D NewLocation)
{
	//积己
	APlayer* NewPlayer = new APlayer();
	NewPlayer->SetLocation(NewLocation);

	//历厘
	World->AddPlayer(NewPlayer);
}

void UEngine::SpawnWall(FVector2D NewLocation)
{
	//积己
	AWall *NewWall = new AWall();
	NewWall->SetLocation(NewLocation);

	//历厘
	World->AddWall(NewWall);
}

void UEngine::SpawnGoal(FVector2D NewLocation)
{
	//积己
	AGoal* NewGoal = new AGoal();
	NewGoal->SetLocation(NewLocation);

	//历厘
	World->AddGoal(NewGoal);
}

void UEngine::SpawnFloor(FVector2D NewLocation)
{
	//积己
	AFloor* NewFloor = new AFloor();
	NewFloor->SetLocation(NewLocation);

	//历厘
	World->AddFloor(NewFloor);
}

void UEngine::Init()
{
	World = new UWorld();
}

void UEngine::Term()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
}

void UEngine::Render()
{
}

