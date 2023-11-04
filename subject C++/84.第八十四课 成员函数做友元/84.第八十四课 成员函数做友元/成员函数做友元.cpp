#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();//1  ��ʼ��building

	void visit();  //2  ��visit�������Է���Building�е�˽�г�Ա
	void visit2(); //3  ��visit2���������Է���Building�е�˽�г�Ա
public:
	Building* b;//1
};

class Building
{
	friend void GoodGay::visit();//���߱�����GoodGay��visit��Ա�������Է���
public:
	Building();
public:
	string m_SettingRoom;//����
private:
	string m_BedRoom;//����
};

Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()//1
{
	b = new Building;
}
//��visit�������Է���Building�е�˽�г�Ա
void GoodGay::visit()//2
{
	cout << "visit�������ڷ���:" << b->m_SettingRoom << endl;
	cout << "visit�������ڷ���:" << b->m_BedRoom << endl;
}
//��visit2���������Է���Building�е�˽�г�Ա
void GoodGay::visit2()//3
{
	cout << "visit2�������ڷ���:" << b->m_SettingRoom << endl;
	//cout << "visit�������ڷ���:" << b->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
}