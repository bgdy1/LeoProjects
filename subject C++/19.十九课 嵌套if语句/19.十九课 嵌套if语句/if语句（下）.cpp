#include<iostream>
using namespace std;

int main()
{
	//1.提示输入高考分数
	int score = 0;
	cout << "请输入高考考试分数" << endl;
	cin >> score;
	//2.显示高考分数
	cout << "您输入的分数为" << score << endl;
	//3.判断
	//如大于600 一本
		//大于700 北大
		//大于650 清华
		//其余	  人大
	//如大于500 二本
	//如大于400 三本
	//其余情况 未考上本科
	if (score > 750)
	{
		cout << "您逗我玩呢 傻逼" << endl;
	}
	else if (score > 600)
	{
		cout << "恭喜考入一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考上清华大学" << endl;
		}
		else
		{
			cout << "您能考入人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	else
	{
		cout << "请再接再厉" << endl;
	}


	system("pause");
	return 0;
}