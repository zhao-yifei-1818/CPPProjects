#include <iostream>

using namespace std;

int main()
{
    cout << "c++ stores boolean as 1 and anyother numbers as true and 0 being false!" << endl;

    int grade{0};
    cout << "Please enter a grade: " << endl;
    cin >> grade;

//    if, else if is good because it lets us only do one option.
    if (grade >= 90)
        cout << "A";
    else
        if(grade >= 80)
            cout << "B";
    else
        if(grade >= 70)
            cout << "C";
    else
        cout << "f";

    cout <<"\nConditional operator (?:)\n-Ternary operator: 3 arguments\nexpression1 ? expression2 : expression3\n\nif expression1 is\n-true, result is expression2\nfalse, result is expression3\n"<<endl;
    int a,b;
    a = 5;
    b = 6;
//    this makes max equals a or b depends on which one bigger.
    int bigger = (a >= b) ? a:b;
    cout << bigger << endl;

    cout << "Enter number of monkeys: ";

    int monkeys;
    cin >> monkeys;

    cout <<"You chose "
         << monkeys
//            ((ifThisTrue) ? (dothis) : (ordoThisIfFalse))
         << ((monkeys > 1) ? " monkeys" : " monkey")
         << endl;
    cout << "------------";



    return 0;


}
