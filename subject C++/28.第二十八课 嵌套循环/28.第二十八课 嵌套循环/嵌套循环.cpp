#include<iostream>
using namespace std;

int main()
{
    //利用嵌套循环来实现星图

    //打印一行星图

    //外层执行一次,内层执行一周
    //外层循环
    for (int i = 0; i < 10; i++)
    {
        //内层循环
        for (int j = 0; j < 10; j++)// i<10是因为外层循环已经执行了一次 刷了一行
        {
            cout << " * ";
        }

        cout << endl;
    }
    system("pause");
    return 0;
}