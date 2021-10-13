#pragma once
#include "Vector2D.h"

//상속 X
// public: 모두 사용 공개
//private: 나만 사용  비공개

//상속
//public: 모두 사용 공개, 상속 해줌
//private: 나만 사용  비공개, 상속 안해줌
//protected: 가족 사용 비공개, 상속 해줌

//엔진으로 작업한다.
// 엔진에 있는 class중에서 사용 할 클래스를 선택
// 사용 할 class를 상속 받아서 원하는 class를 만들고
// 새로 만든 class에 새 기능 구현을 추가

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
protected: // 상속 해줌, 밖에서 접근 불가
	FVector2D Location;
};

