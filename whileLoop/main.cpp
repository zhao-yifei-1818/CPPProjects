#include "io.h"

/*    Pattern solving is pattern recognition

        //      total something up
        //      1Declare variable before loop, 2Add current value in loop, 3Use total after loop

        //      find average
        //      1get total,2get count, 3after loop, 4divide total by count

int ii = 1;
int total = 0;
int count = 0;

while (ii <= 100)
{
    total += ii; "current value"
    count ++;
    ii++;
}
double average = static_cast<double>(total)/count;
cout << average;





*/
int main()
{
    //this gets user int input and return it as value"limit"
    int limit{ioUserInt()};

    //this takes limit(one input) and count ii for that times and print it
    count_print(limit);

    return 0;
}
