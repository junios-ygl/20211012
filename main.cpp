#include "Engine.h"

using namespace std;

int main()
{
    UEngine Engine;

    bool Result = Engine.LoadLevel("map01.dat");
    if (!Result)
    {
        cout << "fail load mapdata." << endl;
        return 1;
    }

    Engine.Run();


    return 0;
}