#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;

};

//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	struct student stu;//stuΪ�Զ��������

};

int main()
{
	struct teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	
	t.stu.name = "����";
	t.stu.score = 60;
	t.stu.age = 18;

	system("pause");
	return 0;
}
