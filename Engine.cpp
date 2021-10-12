#include "Engine.h"
#include "World.h"

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
