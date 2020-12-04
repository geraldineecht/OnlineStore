#include <iostream>
#include "Store.h"
using namespace std;

int main()
{

    Client clientA("Hannah", "Montana", 6142345678, 1000, 100);
    Store AnnTaylor;

    AnnTaylor.start(clientA);

    cout << endl << "Hello World!\n";
}

