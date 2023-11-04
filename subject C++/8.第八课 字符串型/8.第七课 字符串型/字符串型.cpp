#include<iostream>
using namespace std;
#include<string>//注意 使用C++风格的字符串要加上这个

//注意 字符串只可以使用双引号 如果想加单引号 出门右拐字符型 谢谢

int main() 
{
	//1.C风格字符串
	char str[] = "helloworld";
	cout << str << endl;

	//2.C++风格字符串 必须要用#include<string>前缀
	string str2 = "hello world";
	cout << str2 << endl;


	system("pause");
		return 0;
}





