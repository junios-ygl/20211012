#pragma once

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

