#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "��������������������:" << endl;
	cin >> a >> b;//�������� 10 0 ģ���쳣

	try
	{
		if (b != 0)
		{
			float c = a / b;
			cout << "���Ϊ:" << c << endl;
		}
		else
		{
			throw runtime_error("��������Ϊ0");
		}
	}
	catch (runtime_error error)
	{
		cout << error.what() << endl;
	}

	return 0;
}