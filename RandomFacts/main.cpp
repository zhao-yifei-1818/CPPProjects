#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
//    less predictable method: using ctime to generate seed of rand.
srand(time(0));
//    int random number num with range of  % 10000 with minimum of 100
    int num = rand() % 10000 + 100;
    cout << "int rand num: " << num << endl;
//    generating one double value from 0.0 to 0.9999
    double r = static_cast<double>(rand()) / RAND_MAX;
    cout << "Double Rand r: "<< r << endl;



    char grade = 'A';
    cout << grade << " is char grade and it uses ''"<< endl;

    string student = "William";
    cout << student << " is string student and it uses """<< endl;
    return 0;
}
