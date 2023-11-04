#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;

};

//定义老师结构体
struct teacher
{
	int id;//老师编号
	string name;//老师名字
	int age;//老师名字
	struct student stu;//stu为自定义变量名

};

int main()
{
	struct teacher t;
	t.id = 10000;
	t.name = "罗翔";
	t.age = 50;
	
	t.stu.name = "张三";
	t.stu.score = 60;
	t.stu.age = 18;

	system("pause");
	return 0;
}
