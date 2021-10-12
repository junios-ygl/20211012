#pragma once

#include "Vector2D.h"
#include "Actor.h"
#include "World.h"
#include <iostream>


class UEngine
{
public: //�����(������ �ٸ� ���α׷� ����� ������)
	UEngine();
	~UEngine();

	/*
	* ������ ���� ��
	* �Է� : ����
	* ��� : ���� 
	*/
	void Run();

	void SpawnPlayer(FVector2D NewLocation);
	void SpawnWall(FVector2D NewLocation);
	void SpawnGoal(FVector2D NewLocation);
	void SpawnFloor(FVector2D NewLocation);


private: //���� �����ڰ� ���

	/*������ ���� ���̸� true, �ƴϸ� false*/
	bool bIsRunning = false;

	void Init();
	void Term();

	void Input();
	void Tick();
	void Render();

	class UWorld* World;
};
