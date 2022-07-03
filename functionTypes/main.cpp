#include "HeaderFileExample1.h"
#include <iostream>
//Best practice

//To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:

//The paired header file
//Other headers from your project
//3rd party library headers
//Standard library headers
//The headers for each grouping should be sorted alphabetically.

using namespace std;
// Function that does not return a value
void returnNothing()
{
}

// Function that returns a value
int returnFive()
{
    return 5;
}

void returnmain()
{
    // When calling a function by itself, no value is required
    returnNothing(); // ok: we can call a function that does not return a value
    returnFive();    // ok: we can call a function that returns a value, and ignore that return value

    // When calling a function in a context that requires a value (like std::cout)
    cout << returnFive();    // ok: we can call a function that returns a value, and the value will be used
//    cout << returnNothing(); // compile error: we can't call a function that returns void in this context

}
    int main()
    {
        cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
        cout <<"Success!\n https://www.learncpp.com/images/CppTutorial/Section1/IncludeHeader.png?ezimgfmt=rs:590x344/rscb2/ng:webp/ngcb2";
        return 0;

    }
