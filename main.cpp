#include "Engine.h"
#include "Player.h"

using namespace std;

int main()
{


    UEngine Engine;

    bool Result = Engine.LoadLevel("map01.dat");
    if (!Result)
    {
        cout << "fail load map data." << endl;
        return 1;
    }

    Engine.Run();


    return 0;
}