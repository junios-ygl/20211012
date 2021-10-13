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
        cout << "Character ����" << endl;
    }

    virtual ~Character()
    {
        cout << "Character �ı�" << endl;
    }

    virtual void Move() = 0; //���� ���� �Լ�, �������̽�, �ٷ� ����, ��� �Ŀ� ����
};

class Player : public Character
{
public:
    Player()
    {
        cout << "Player ����" << endl;
    }
    virtual ~Player()
    {
        cout << "Player �ı�" << endl;
    }

    virtual void Move() override
    {
        cout << "Player �̵�" << endl;
    }
};



class Monster : public Character
{
public:
    Monster()
    {
        cout << "Monster ����" << endl;
    }
    virtual ~Monster()
    {
        cout << "Monster �ı�" << endl;
    }

    virtual void Move() override
    {
        cout << "Monster �̵�" << endl;
    }
};

class Goblin : public Monster
{
public:
    Goblin()
    {
        cout << "Goblin ����" << endl;
    }
    virtual ~Goblin()
    {
        cout << "Goblin �ı�" << endl;
    }

    virtual void Move() override
    {
        cout << "Goblin �̵�" << endl;
    }
};

class Slime : public Monster
{
public:
    Slime()
    {
        cout << "Slime ����" << endl;

    }
    ~Slime()
    {
        cout << "Slime �ı�" << endl;
    }

    virtual void Move() override
    {
        cout << "Slime �̵�" << endl;
    }
};

class Hog : public Monster
{
public:
    Hog()
    {
        cout << "Hog ����" << endl;
    }
    ~Hog()
    {
        cout << "Hog �ı�" << endl;
    }

    virtual void Move() override
    {
        cout << "Hog �̵�" << endl;
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