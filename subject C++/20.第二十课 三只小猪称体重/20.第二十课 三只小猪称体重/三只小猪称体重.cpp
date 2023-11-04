#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "请输入小猪A体重" << endl;
	cin >> num1;
	cout << "请输入小猪B体重" << endl;
	cin >> num2;
	cout << "请输入小猪C体重" << endl;
	cin >> num3;

	if (num1 > num2)//A比B重
	{
		if (num1 > num3)//A比C重
		{
			cout << "小猪A最重" << endl;
		}
		else //C比A重
		{
			cout << "小猪C最重" << endl;
		}
	}
	else //B比A重
	{
		if (num2 > num3)//B比C重
		{
			cout << "小猪B最重" << endl;
		}
		else //C比B重
		{
			cout << "小猪C最重" << endl;
		}
	}



	system("pause");
	return 0;
}