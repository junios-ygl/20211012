#pragma once

#include "Vector2D.h"

class AWall
{
public:
	AWall();
	~AWall();
private:
	FVector2D Location;

	void Render();
};

