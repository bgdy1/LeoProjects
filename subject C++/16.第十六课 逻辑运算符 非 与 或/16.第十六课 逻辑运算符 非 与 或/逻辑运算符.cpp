#include<iostream>
using namespace std;

int main()
{
	//1.�߼������ �� !
	int a = 10;
	cout << !a << endl;

	cout << !!a << endl;

	//2.�߼������ �� &&
	//int a = 10
	int b = 10;
	cout << (a && b) << endl;
	
	//int b = 10
	a = 0;
	cout << (a && b) << endl;
	//ͬ��Ϊ�� ����Ϊ��

	//3.�߼������ �� ||
	//a=10
	//b=10
	cout << (a || b) << endl;

	//a = 2
	//b = 2
	cout << (a || b) << endl;
	//0 ֤���Ǵ��

	//ͬ��Ϊ�� ����Ϊ��

	system("pause");
	return 0;

}