#include<iostream>
using namespace std;

int& test01()
{
	static int a = 10;//��̬���������ȫ����
	return a;
}

int main()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;//ʵ�α������޸�
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	ref = 1000;
	cout << "ref = " << ref << endl;//ʵ�α������޸�
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

}