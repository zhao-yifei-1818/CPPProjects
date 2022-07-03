#include <iostream>

//switch
//char
//static_cast
//function call
//parameters
//initialize




// Full implementation of the getUserInput function
int getUserInput()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}
char getMathematicalOperation()
{
    std::cout << "Enter an operator: +, * , -\n";
    char oprator1{};
    std::cin >> oprator1;
    return oprator1;
}
char distinguishOperation(char oprator1)
{
    char num{};
    if (oprator1 == '+')
    {
        num = '1';
    }
    else if (oprator1 == '*')
    {
        num = '2';
    }
    else if (oprator1 == '-')
    {
        num = '3';
    }
    else {
        return 0;
    }
    return num;
}

int switchOperation(char num, int value, int value2)
{
    switch (num)
    {
        case '1':
            value = value + value2;
            break;
        case '2':
            value = value * value2;
            break;
        case '3':
            value = value - value2;
            break;
        //        don't know if this default is optional
        default:
            break;
    }
    //This is called raw_answer in main. should i fix
    return value;

}

double IntToDouble(int raw_answer)
{
    double answer = static_cast<double>(raw_answer);
    return answer;
}

void PrintResult(double answer)
{
    std::cout << answer << " is your answer\n";
}


int main()
{
    // Get first number from user
    int value{ getUserInput() }; // Note we've included code here to test the return value!

    // Get mathematical operation from user
    char oprator1 { getMathematicalOperation() };

    // Get second number from user
    int value2{  getUserInput() };

    // decide which operation
    char num { distinguishOperation(oprator1) };

    // take 3 input, test result, do one of 3 ways of calculation and return a raw answer
    // It's raw because user input int and some time we should output float or double.
    int raw_answer { switchOperation(num, value, value2) };

    //change raw answer to double in case some time its not integer
    double answer{ IntToDouble(raw_answer) };

    PrintResult(answer);





    // PrintResult result
    return 0;
}
