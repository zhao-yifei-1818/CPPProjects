#include <iostream>

using namespace std;
//functions get defineded before the actual call

int add(int x, int y)
{
    cout << "The function prototype is the statement we use to forward declare a function.\n";
    return x + y;
}

int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    cout << "源代碼（source code）→ 預處理器（preprocessor）→ 編譯器（compiler）→ 匯編程序（assembler）→ 目標代碼（object code）→ 鏈接器（linker）→ 執行檔（executables），最後打包好的檔案就可以給電腦去判讀執行了。";
    return 0;
}

//The one definition rule (or ODR for short) is a well-known rule in C++. The ODR has three parts:

//Within a given file, a function, variable, type, or template can only have one definition.
//Within a given program, a variable or normal function can only have one definition. This distinction is made because programs can have more than one file (we’ll cover this in the next lesson).
//Types, templates, inline functions, and inline variables are allowed to have identical definitions in different files. We haven’t covered what most of these things are yet, so don’t worry about this for now -- we’ll bring it back up when it’s relevant.
