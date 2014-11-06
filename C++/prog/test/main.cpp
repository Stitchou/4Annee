#include <iostream>
#include "./definition.h"

using namespace std;

int main(int argc, char * argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    int *i = nullptr;
    *i = 10;
    int &ri = *i;
    cout << ri << endl;

    return 0;

}

