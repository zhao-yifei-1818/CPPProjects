#include <iostream>

using namespace std;

int main()
{
//    Comment it like describing it to sb who dont know it.
    cout << "Hello World!" << endl;
    cout << "identifier are the name of one variable" <<endl;
    cout << "variable are an area of memory that contains values" << endl;

    cout << "Data is any information that can be moved, processed, or stored by a computer.";

    cout << "value is a single piece of data stored in memory." << endl;


//    Choose direct (braces) initializer makes things works more efficient.
    int a = 5;      // Equal sign initializer
    int b{5};   // parathesis initializer
    int c(6);   // Braces Initializer

    cin >> a;
    cin >> b;

    cout << "Read In x and then y" ;
    cin >> a >> b;
    cout <<"\na: " << a << "\nb: " << b;

    int CONSTANT_A = {1};
    int CONSTANT_B = (3);
    cout << "WE USE UPPERCASE FOR A declearation of a constant and it remains in one value through whole program";

//    WE convert one thing to another thing using cast
    int x = static_cast<int>(4.9);
    cout << "int x = static_cast<dataTypeName>(expression);\nWhere -dataTypeName is datatype you want to end up with\n-expression is the value you want to change.\n";
    cout << "\n\nWe use cast to convert one thing to another thing.\nType in new value for" << x << endl;
    cin >> x;

    x = 2;
    int y = 3;
    double z =static_cast<double>(x)/y;
    cout << z << endl;


    return 0;


}
