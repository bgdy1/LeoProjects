#include<iostream>
#include<string>
using namespace std;

//1.创建学生数据类型：学生包括（姓名,年龄,分数）
//自定义数据类型 一些类型集合组成的一个类型
//语法 struct 类型名称 { 成员列表 }

struct Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;

	string info;
}S3;//3.


//2.通过学生类型

int main()
{
	//2.1 struct student s1
	struct Student S1;
	//给s1属性赋值,通过访问结构体中的属性
	S1.name = "田所浩二";
	S1.age = 24;
	S1.score = 114514;
	S1.info = "是个学生";

	cout << "姓名 = " << S1.name << endl;
	cout << "岁数 = " << S1.age << endl;
	cout << "分数 = " << S1.score << endl;
	cout << "信息 = " << S1.info << endl;
	
	//2.2 struct student s2 = {......}
	
	struct Student S2 =
	{
		"张三",16,100,"法外狂徒"
	};
	
	//2.3 定义结构体时顺便创建结构体变量
	S3.name = "李四";
	S3.age = 18;
	S3.score = 90;
	S3.info = "守法市民李四"; 


}