#include<iostream>
using namespace std;
//常量的定义方式
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
#define day 7

int main() {
	//day = 14;一个错误 因为我们设定了day 7 是常量，一但更改就会报错
	
	//显示：一周总共有：常量（7） 天 结束这行
	cout << "一周总共有：" << day << "天" << endl;
	
	//2.const修饰的变量
	const int month = 12;
	//month = 24; //错误， 因为常量设置

	//输出：每年有多少月： 常量（12） 月 结束这行
	cout << "每年有多少月：" << month << "月" << endl;
	
	//系统暂停
	system("pause");
	return 0;
}