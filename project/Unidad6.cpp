#include <iostream>
#include "Utils.h"

using namespace std;

int main()
{
    initializeRandom();

    cout << getRandom(3) << "\n";
    cout << getRandom(3) << "\n";
    cout << getRandom(3) << "\n";
    cout << getRandom(3) << "\n";
    cout << getRandom(3) << "\n";

    system("pause");

}
