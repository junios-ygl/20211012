#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();
	~AActor();

	void Input();
	void Tick();
	void Render();
	void SetLocation(FVector2D NewLocation);
	FVector2D GetLocation();

private:
	FVector2D Location;
};

