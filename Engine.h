#pragma once

#include "Vector2D.h"
#include "Actor.h"
#include "World.h"

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

	template<typename T>
	void CreateActor(FVector2D NewLocation);

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

template<typename T>
void UEngine::CreateActor(FVector2D NewLocation)
{
	World->CreateActor<T>(NewLocation);
}
