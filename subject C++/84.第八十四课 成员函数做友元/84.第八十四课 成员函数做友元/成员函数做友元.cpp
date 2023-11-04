#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();//1  初始化building

	void visit();  //2  让visit函数可以访问Building中的私有成员
	void visit2(); //3  让visit2函数不可以访问Building中的私有成员
public:
	Building* b;//1
};

class Building
{
	friend void GoodGay::visit();//告诉编译器GoodGay的visit成员函数可以访问
public:
	Building();
public:
	string m_SettingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()//1
{
	b = new Building;
}
//让visit函数可以访问Building中的私有成员
void GoodGay::visit()//2
{
	cout << "visit函数正在访问:" << b->m_SettingRoom << endl;
	cout << "visit函数正在访问:" << b->m_BedRoom << endl;
}
//让visit2函数不可以访问Building中的私有成员
void GoodGay::visit2()//3
{
	cout << "visit2函数正在访问:" << b->m_SettingRoom << endl;
	//cout << "visit函数正在访问:" << b->m_BedRoom << endl;
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