#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "请输入两组数字完成相除:" << endl;
	cin >> a >> b;//可以输入 10 0 模拟异常

	try
	{
		if (b != 0)
		{
			float c = a / b;
			cout << "结果为:" << c << endl;
		}
		else
		{
			throw runtime_error("除数不能为0");
		}
	}
	catch (runtime_error error)
	{
		cout << error.what() << endl;
	}

	return 0;
}