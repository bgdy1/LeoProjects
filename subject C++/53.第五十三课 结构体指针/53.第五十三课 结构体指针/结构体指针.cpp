#include<iostream>
using namespace std;

//�ṹ��ָ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

int main()
{
	//����ѧ���ṹ�����
	struct student s = { "����",18,100 };

	//ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;

	//ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���� ->
	cout << "����:" << p->name << "����:" << p->age << "����:" << p->score << endl;

	system("pause");
	return 0;
}