#include <iostream>

using namespace std;
int gatherInput(){

    //    Gather input
        cout<<"Enter the number of cents: ";
        int cents;
        cin >> cents;
    //    DO math
        int numQuarters = cents / 25;
        int leftoverCents = cents % 25;

        cout << "numQuarters: " << numQuarters << endl;
        cout << "leftoverCents: " << leftoverCents << endl;

        int numDimes = leftoverCents / 10;
        leftoverCents = leftoverCents % 10;

        int numNickels = leftoverCents / 5;
        leftoverCents = leftoverCents % 5;

        int numPennies = leftoverCents;

    //    DO output
        cout << numQuarters << " Quarters" << endl;
        cout << numDimes << " Dimes" << endl;
        cout << numNickels << " Nickels" << endl;
        cout << numPennies << " Pennies" << endl;
      return 0;
}

int main()
{

    string prompt;
    string user_input;
    user_input = "y";
    while (user_input != "n") {
        gatherInput();
        prompt = "Calculate again?(y/n)";
        cout << prompt << endl;
        cin >>user_input;

    }

    return 0;

}










//int main()
//{
//    class Circle{
//    // Dont worry about public
//    public:
//        // STATE - Variables
//        double radius;

//        // BEHAVIORS - Functions
//        double getArea() {
//            return radius * radius * 3.14;
//        }

//    };


//    Circle c1;
//    c1.radius = 10;

//    Circle c2;
//    c2.radius = 15;

//    Circle c3;
//    c3.radius = 30;


//    double theArea = c1.getArea();
//    cout<<theArea<<" is the area of " << Circle.c1 <<endl;
//    return 0;
//}
