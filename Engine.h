#pragma once

#include "Vector2D.h"
#include "Actor.h"
#include "World.h"
#include <iostream>


class UEngine
{
public: //사용자(개발자 다른 프로그램 만드는 개발자)
	UEngine();
	~UEngine();

	/*
	* 엔진을 실행 함
	* 입력 : 없음
	* 출력 : 없음 
	*/
	void Run();

	bool LoadLevel(std::string filename);

	void SpawnPlayer(FVector2D NewLocation);
	void SpawnWall(FVector2D NewLocation);
	void SpawnGoal(FVector2D NewLocation);
	void SpawnFloor(FVector2D NewLocation);


private: //실제 개발자가 사용

	/*엔진이 실행 중이면 true, 아니면 false*/
	bool bIsRunning = false;

	void Init();
	void Term();

	void Input();
	void Tick();
	void Render();

	class UWorld* World;
};
