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

	//Accessor
	void SetLocation(FVector2D NewLocation);
	FVector2D GetLocation();

protected: // 상속 안해 좀
	FVector2D Location;
};

