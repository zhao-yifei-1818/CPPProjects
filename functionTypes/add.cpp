#include "HeaderFileExample1.h"
//No, there is nothing wrong with it. Every file that needs to directly use functionality from <iostream>, should include it directly. Header guards will take care of multiple inclusions.

//There is a potential problem when you have circular dependencies. For example, see this question: Resolve header include circular dependencies

//However, since <iostream> is unlikely to be including or depending on any of your files, circular dependencies are not a problem in this case.
#include <iostream>

using namespace std;
//Don’t forget to add add.cpp to your project so it gets compiled in).

//When you add new code files to your project, give them a .cpp extension.//Source files should include their paired header
int add(int x, int y)
{
    cout << "\nThis is add.cpp, another source file\nWhen you compile your program, you'll need to include all of the relevant code files on the compile line. For example: g++ main.cpp add.cpp -o main, where main.cpp and add.cpp are the names of your code files, and main is the name of the output file.\n";
    return x + y;
}
