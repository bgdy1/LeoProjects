#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "������С��A����" << endl;
	cin >> num1;
	cout << "������С��B����" << endl;
	cin >> num2;
	cout << "������С��C����" << endl;
	cin >> num3;

	if (num1 > num2)//A��B��
	{
		if (num1 > num3)//A��C��
		{
			cout << "С��A����" << endl;
		}
		else //C��A��
		{
			cout << "С��C����" << endl;
		}
	}
	else //B��A��
	{
		if (num2 > num3)//B��C��
		{
			cout << "С��B����" << endl;
		}
		else //C��B��
		{
			cout << "С��C����" << endl;
		}
	}



	system("pause");
	return 0;
}