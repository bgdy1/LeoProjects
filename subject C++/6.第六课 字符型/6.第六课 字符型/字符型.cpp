#include<iostream>
using namespace std;

int main() {
	
	//1.字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;
	
	//2.字符型变量所占的内存大小//只占1字节
	sizeof(char);
	cout << "char字符型变量所占的内存空间:" << sizeof(char) << endl;
	
	//3.字符型变量常见错误
	//第一种错误情况：char ch2 = "b";
	//创建字符型变量的时候要用单引号
	
	//第二种错误情况:char ch2 = 'abcdef'
	//创建字符型变量的时候 单引号内只可以有一个字符
	
	
	//4.字符型变量对应的ASCII编码
	//ASCII编码例如：a - 97
				  //b - 65
	cout << int(ch) << endl;
	//强行将变数ch改成int整数形式

		system("pause");
		return 0;
}