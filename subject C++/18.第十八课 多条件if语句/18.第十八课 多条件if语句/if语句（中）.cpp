#include<iostream>
using namespace std;

int main()
{
	//选择结构 多条件if语句

	//1. 用户输入分数
	int score = 0;
	cout << "请输入您的高考分数" << endl;
	cin >> score;
	//2.提示用户输入的分数
	cout << "您的高考分数是:" << score << endl;
	//3.判断
	// 如果大于600，考上一本
	// 如果大于500，考上二本
	// 如果大于400，考上三本
	// 前三个都没有满足, 未考上本科
	if (score > 600)
	{
		cout << "恭喜考入一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜考入三本大学" << endl;
	}
	else //千万不要再else后面写任何条件
	{
		cout << "so sad " << endl;
	}
	
	system("pause");
	return 0;
}