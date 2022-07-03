#include "io.h"
#include <iostream>
using std::cout;
using std::cin;

//this gets user int input and return it as value"limit"
//io user int.
int ioUserInt()
{
    int limit{};
    cout << "Enter your limit: ";
    cin >> limit;
    return limit;
}

//this takes limit(one input) and count ii for that times and print it
void count_print(int limit)
{
    int ii = 0;
    while (ii < limit)
    {
        cout << "Hello for the " << ii << " time\n";
        cout << "ii == "<<ii << "\n";
        ii = ii + 1;
    }
}

