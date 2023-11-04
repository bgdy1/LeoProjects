#include<iostream>
using namespace std;

int main() 
{
	//switch语句
	//给电影评分
	// 10~9 经典
	// 8~7  非常好
	// 6~5  一般
	// 5以下 垃圾

	//1.提示用户给电影评分
	cout << "请给电影进行打分" << endl;
	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为:" << score << endl;
	//3.根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
		if (score > 10)
		{
			cout << "你有病是吧" << endl;
		}
		case 10:
			cout << "您认为是经典电影" << endl; break;//break代表退出当前分支
		case 9:
			cout << "您认为是经典电影" << endl;
		case 8:
			cout << "您认为非常好" << endl; break;
		case 7:
			cout << "您认为非常好" << endl;
		case 6:
			cout << "您认为很一般" << endl; break;
		case 5:
			cout << "您认为很一般" << endl;
		default:
			cout << "这电影就是个垃圾" << endl;
	
	}
	//if 和 switch 区别
	//switch 缺点,判断时只能是整型或者字符型,不可以是一个区间
	//switch 优点,结构清晰,执行能力高
	system("pause");
	return 0;
}