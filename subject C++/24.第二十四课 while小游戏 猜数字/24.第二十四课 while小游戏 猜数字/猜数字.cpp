#include<iostream>
using namespace std;

int main() 
{
	//1.系统生成随机数
	int num = rand() % 100; //生成0-99的随机数
	int val = 0;
	//2.玩家进行猜测
	while (1)
	{
		cout << "请输入数字" << endl;
		cin >> val;

		//3.判断玩家的猜测
		if (val > num)
		{
			cout << "猜测数字大了" << endl;
		}
		else if (val < num)
		{
			cout << "猜测数字小了" << endl;
		}
		else
		{
			cout << "恭喜猜对了！" << endl;
			break;
		}

	}

		system("pause");
		return 0;
	
}