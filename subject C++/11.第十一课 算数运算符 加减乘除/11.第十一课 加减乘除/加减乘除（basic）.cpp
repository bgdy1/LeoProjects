#include<iostream>
using namespace std;

int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 2;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除 结果依然是整数 将小数点去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	/*int a3 = 20;     //两个数字相除 除数不可是0
		int b3 = 0;
		cout << a3 / b3 << endl;*/

	system("pause");
	return 0;
}