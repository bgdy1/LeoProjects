#include<iostream>
using namespace std;

//const ʹ�ó���

struct student
{
	string name;
	int age;
	int score;
};

void printstudents(const student *s)//��const���ɱ��⺯����ָ��ı�ʵ����ֵ
{
	cout << "����:" << s->name << "����:" << s->age << "����" << s->score << endl;
	//s->name = 20;
}

int main()
{
	struct student s = { "����",15,70 };
	printstudents(&s);

	system("pause");
	return 0;
}