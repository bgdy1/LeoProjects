#include<iostream>
#include<string>
using namespace std;

//����ԭ�� �ڶ������ٿռ� Ȼ����з���

class Building;

class GoodGay//4
{
public:
	GoodGay();//1 b = new Building;

	void visit();//2 �ιۺ��� ����building�е����� b->xxxxx;
public:
	Building* b;//3
};

class Building//3
{
	friend class GoodGay;//4
public:
	Building();//5
public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

GoodGay::GoodGay()//1
{
	//�������������
	b = new Building;
}

void GoodGay::visit()//2
{
	cout << "�û��������ڷ��ʣ�" << b->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << b->m_BedRoom << endl;
}

//����д���캯������
Building::Building()//5
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
}