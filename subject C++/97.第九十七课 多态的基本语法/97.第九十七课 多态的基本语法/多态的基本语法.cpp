#include<iostream>
using namespace std;

//��̬

class animal
{
public:
	//�麯��
	void virtual speak()
	{
		cout << "������˵��" << endl;
	}
};

class cat :public animal
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class dog :public animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵��,��ô���������ַ�Ͳ�����ǰ��
//��Ҫ�����н׶ν��а�,��ַ���

//��̬��̬��������
//1. �м̳й�ϵ
//2. ������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ִ���������

void dospeak(animal &animal)//animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	cat cat;
	dospeak(cat);
	dog dog;
	dospeak(dog);
}

int main()
{
	test01();
}