#include<iostream>
using namespace std;

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printstudent1(struct student s)
{
	cout << "�Ӻ����� ����:" << s.name << "����:" << s.age << "����:" << s.score << endl;
}

//2.��ַ����
void printstudent2(struct student* p)
{
	cout << "�Ӻ���2�� ����:" << p->name << "����:" << p->age << "����:" << p->score << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������� ��ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printstudent1(s);
	printstudent2(&s);


	system("pause");
	return 0;
}