#include<iostream>
#include<string>
using namespace std;

//1.����ѧ���������ͣ�ѧ������������,����,������
//�Զ����������� һЩ���ͼ�����ɵ�һ������
//�﷨ struct �������� { ��Ա�б� }

struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;

	string info;
}S3;//3.


//2.ͨ��ѧ������

int main()
{
	//2.1 struct student s1
	struct Student S1;
	//��s1���Ը�ֵ,ͨ�����ʽṹ���е�����
	S1.name = "�����ƶ�";
	S1.age = 24;
	S1.score = 114514;
	S1.info = "�Ǹ�ѧ��";

	cout << "���� = " << S1.name << endl;
	cout << "���� = " << S1.age << endl;
	cout << "���� = " << S1.score << endl;
	cout << "��Ϣ = " << S1.info << endl;
	
	//2.2 struct student s2 = {......}
	
	struct Student S2 =
	{
		"����",16,100,"�����ͽ"
	};
	
	//2.3 ����ṹ��ʱ˳�㴴���ṹ�����
	S3.name = "����";
	S3.age = 18;
	S3.score = 90;
	S3.info = "�ط���������"; 


}