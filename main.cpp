#include <iostream>
#include "Engine.h"
#include "Player.h"

using namespace std;

class Character
{
public:
    Character()
    {
        cout << "Character 积己" << endl;
    }

    virtual ~Character()
    {
        cout << "Character 颇鲍" << endl;
    }

    virtual void Move() = 0;
};

class Player : public Character
{
public:
    Player()
    {
        cout << "Player 积己" << endl;
    }
    virtual ~Player()
    {
        cout << "Player 颇鲍" << endl;
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
        cout << "Monster 积己" << endl;
    }
    virtual ~Monster()
    {
        cout << "Monster 颇鲍" << endl;
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
        cout << "Goblin 积己" << endl;
    }
    virtual ~Goblin()
    {
        cout << "Goblin 颇鲍" << endl;
    }
};

class Slime
{
public:
    Slime()
    {
        cout << "Slime 积己" << endl;

    }
    ~Slime()
    {
        cout << "Slime 颇鲍" << endl;
    }
};

class Hog
{
public:
    Hog()
    {
        cout << "Hog 积己" << endl;
    }
    ~Hog()
    {
        cout << "Hog 颇鲍" << endl;
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