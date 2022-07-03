#include "io.h"
//again header file goes before iostream
//AND IT SHOULD BE USING DOUBLE QUOTE
#include <iostream>
using namespace std;

#include <cstdlib>

int GeneratingRandom()
{
    //random seed
    srand(12);

    int Randoming = rand() % 1000;
    return Randoming;
}

//int getinputfromuser()
//{
//    return usrinput;
//}

void comparing(int Randoming)
{
    int usrinput;
    cout << "我给你生成了一个数字 这个数字是一个随机数， 范围在0~1000 零到一千\n" << endl;
    do
    {
        cout << "\n我会提示你有没有猜对： " << endl;
        cout << "请输入一个数字 大小在0~1000以内 包括0 和 1000" << endl;
        cin >> usrinput;
        if ( usrinput > Randoming  )
        {

            cout <<"你猜的是 " << usrinput << ",你猜的数大于这个数字\n";
        }
        else if (usrinput < Randoming)
        {
            cout <<"你猜的是 " << usrinput << ",你猜的数字小于这个数字，你猜小了。\n";
        }

    }

    while (Randoming != usrinput);
    cout << "你赢了！猜对了这个数。 这个数就是" << Randoming << endl;
}
//void CountNumber(int)
//{

////  从             下面这个数
////  开始数
//    int KaishiShu = 0;

////  数到             下面这个数：
//    int ShuDaoShi = 1000;

//    while (KaishiShu < ShuDaoShi)
//    {
////        std::cout << KaishiShu << std::endl;
//        KaishiShu = KaishiShu + 100000;
//    }
//    cout << KaishiShu;
//}



int main()
{
////    get and return a single integer from the user
//    int userinput{readNumber()};
//    int userinput2{readNumber()};

////    output the answer take a single parameter and have no return value
//    writeAnswer(userinput+userinput2);
//    int usrinput = {getinputfromuser()}
//    int Randoming = {GeneratingRandom()};
//    CountNumber(Randoming);

    comparing(GeneratingRandom());




    return 0;
}
