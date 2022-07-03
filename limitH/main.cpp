#include <iostream>
#include <cmath>
using namespace std;
double userinputh()
{
    double h;
    cout << "input your h value" << endl;
    cin >> h;
    return h;

}
double userinputx()
{
    double x;
    cout << "input your x value" << endl;
    cin >> x;
    return x;

}

int main()
{
    double h = {userinputh()};
    double x = {userinputx()};
    double answer = ((2*(pow(1.35,(x+h))))-(2*(pow(1.35,(x+h)))))/h;
    cout << answer <<endl;


    return 0;
}
