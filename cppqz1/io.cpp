#include "io.h"
#include <iostream>


//Why should we not use namespace std?
//While this practice is okay for example code, pulling in the entire std namespace into the global namespace is not good as it defeats the purpose of namespaces and can lead to name collisions. This situation is called namespace pollution.
int readNumber()
{
    std::cout << "Please enter a single integer: ";
    int userinput{};
    std::cin >> userinput;

    return userinput;

}
void writeAnswer(int userinput)
{
    std::cout << "Your result is: " << userinput<< "\n";
}
