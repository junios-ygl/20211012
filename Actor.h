#pragma once
#include "Vector2D.h"

//��� X
// public: ��� ��� ����
//private: ���� ���  �����

//���
//public: ��� ��� ����, ��� ����
//private: ���� ���  �����, ��� ������
//protected: ���� ��� �����, ��� ����

//�������� �۾��Ѵ�.
// ������ �ִ� class�߿��� ��� �� Ŭ������ ����
// ��� �� class�� ��� �޾Ƽ� ���ϴ� class�� �����
// ���� ���� class�� �� ��� ������ �߰�

class AActor
{
public:
	AActor();
	~AActor();

	void Input();
	void Tick();
	virtual void Render(); //override

	//Accessor
	void SetLocation(FVector2D NewLocation);
	FVector2D GetLocation();

//private:
protected: // ��� ����, �ۿ��� ���� �Ұ�
	FVector2D Location;
};

