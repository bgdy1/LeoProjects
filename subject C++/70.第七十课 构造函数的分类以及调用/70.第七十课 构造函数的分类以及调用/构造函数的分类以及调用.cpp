#include<iostream>
using namespace std;

//1.���캯���ķ����Լ�����
//����	
//	���ղ�������	    �޲ι���(Ĭ�Ϲ���)���вι���
//  �������ͽ��з���		��ͨ����Ϳ�������
class person
{
public:
	//���캯��
	person()
	{
		cout << "person���޲ι��캯������" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person���вι��캯������" << endl;
	}
	
	//�������캯��
	person(const person *p)
	{
		//������������ϵ���������,������������
		age = p->age;
		cout << "person�Ŀ������캯������" << endl;
	}

	~person()
	{
		cout << "person��������������" << endl;
	}

	int age;
};

//����
void test01()
{
	//1.���ŷ�
	//person p;
	//person p2(10);//�����вι���
	//person p3(p2);
	
	//����Ĭ�Ϲ��캯��ʱ��,��Ҫ��() ��Ϊ�������д���,����������ʶ��һ������������:
	//person p1();

	//cout << "p2������Ϊ" << p2.age << endl;
	//cout << "p3������Ϊ" << p3.age << endl;

	//2.��ʾ��
	//person p1;
	//person p2 = person(10);
	//person p3 = person(p2);

	//person(10);//�������� �ص�:��ǰ��ִ�н�����,ϵͳ���������յ���������

	//��Ҫ���ÿ������캯������ʼ��һ�������Ķ��� ��������Ϊ: person(p3) == person p3;��������
	//person(p3);

	//3.��ʽת����
	person p4 = 10;//�൱��д��:person p4 = person(10);
	person p5 = p4;
}

int main()
{
	test01();
}