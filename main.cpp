#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Engine.h"

#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Goal.h"

using namespace std;


int main()
{
    ifstream fin;
    fin.open("map01.txt");
    string line;
    while (!fin.eof())
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();

    return EXIT_SUCCESS;
}