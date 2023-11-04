#include<iostream>
using namespace std;

int main()
{
	//(1.)
	//选择结构 if语句
	//用户输入分数, 如果分数大于600, 视为考上一本大学,在屏幕上输出

	//1.用户输入分数书
	int score;
	cout << "请输入您的分数:" << endl;
	cin >> score;
	
	//2.打印用户输入的分数
	cout << "您的分数为" << score << endl;
	
	//3.判断分数是否大于600, 如果大于, 那么输出, 如果小于 输出so sad
	if (score > 600)
	{
		cout << "congratulation" << endl;
	}
	else 
	{
		cout << "so sad" << endl;
	}
	
	
	system("pause");
	return 0;
}