#include <iostream>
#include "Engine.h"
#include "Player.h"

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

    virtual void Move() = 0;
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
};

class Slime
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
};

class Hog
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
};



int main()
{
    Character* character = new Player();

    Character* goblin = new Goblin();

    delete goblin;

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