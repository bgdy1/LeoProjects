#include<iostream>
using namespace std;

//const 使用场景

struct student
{
	string name;
	int age;
	int score;
};

void printstudents(const student *s)//加const即可避免函数中指针改变实参数值
{
	cout << "姓名:" << s->name << "年龄:" << s->age << "分数" << s->score << endl;
	//s->name = 20;
}

int main()
{
	struct student s = { "张三",15,70 };
	printstudents(&s);

	system("pause");
	return 0;
}