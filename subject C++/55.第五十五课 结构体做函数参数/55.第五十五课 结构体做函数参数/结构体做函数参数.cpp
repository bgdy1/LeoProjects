#include<iostream>
using namespace std;

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息的函数
//1.值传递
void printstudent1(struct student s)
{
	cout << "子函数中 姓名:" << s.name << "年龄:" << s.age << "分数:" << s.score << endl;
}

//2.地址传递
void printstudent2(struct student* p)
{
	cout << "子函数2中 姓名:" << p->name << "年龄:" << p->age << "分数:" << p->score << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中 打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	printstudent1(s);
	printstudent2(&s);


	system("pause");
	return 0;
}