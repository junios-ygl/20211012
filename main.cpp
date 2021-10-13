#include <iostream>
#include <array>
#include <vector>
#include "Engine.h"
#include "Player.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

class Character
{
public:
    Character()
    {
        cout << "Character 생성" << endl;
    }

    virtual ~Character()
    {
        cout << "Character 파괴" << endl;
    }

    virtual void Move() = 0; //순수 가상 함수, 인터페이스, 바로 생성, 상속 후에 생성
};

class Player : public Character
{
public:
    Player()
    {
        cout << "Player 생성" << endl;
    }
    virtual ~Player()
    {
        cout << "Player 파괴" << endl;
    }

    virtual void Move() override
    {
        cout << "Player 이동" << endl;
    }
};



class Monster : public Character
{
public:
    Monster()
    {
        cout << "Monster 생성" << endl;
    }
    virtual ~Monster()
    {
        cout << "Monster 파괴" << endl;
    }

    virtual void Move() override
    {
        cout << "Monster 이동" << endl;
    }
};

class Goblin : public Monster
{
public:
    Goblin()
    {
        cout << "Goblin 생성" << endl;
    }
    virtual ~Goblin()
    {
        cout << "Goblin 파괴" << endl;
    }

    virtual void Move() override
    {
        cout << "Goblin 이동" << endl;
    }
};

class Slime : public Monster
{
public:
    Slime()
    {
        cout << "Slime 생성" << endl;

    }
    ~Slime()
    {
        cout << "Slime 파괴" << endl;
    }

    virtual void Move() override
    {
        cout << "Slime 이동" << endl;
    }
};

class Hog : public Monster
{
public:
    Hog()
    {
        cout << "Hog 생성" << endl;
    }
    ~Hog()
    {
        cout << "Hog 파괴" << endl;
    }

    virtual void Move() override
    {
        cout << "Hog 이동" << endl;
    }
};



int main()
{
    vector<Character*> Characters;

    Characters.push_back(new Player());

    srand(time(nullptr));

    for (int i = 0; i < 10; ++i)
    {
        int Type = rand() % 3;
        if (Type == 0)
        {
            Characters.push_back(new Goblin());
        } 
        else if (Type == 1)
        {
            Characters.push_back(new Slime());
        }
        else 
        {
            Characters.push_back(new Hog());
        }
    }

    for (size_t i = 0; i < Characters.size(); ++i)
    {
        Characters[i]->Move();
    }
    for (auto PlayCharacter : Characters)
    {
        PlayCharacter->Move();
    }

    for (auto iter = Characters.begin(); iter != Characters.end(); ++iter)
    {
        (*iter)->Move();
    }


    //UEngine Engine;

    //bool Result = Engine.LoadLevel("map01.dat");
    //if (!Result)
    //{
    //    cout << "fail load map data." << endl;
    //    return 1;
    //}

    //Engine.Run();


    return 0;
}