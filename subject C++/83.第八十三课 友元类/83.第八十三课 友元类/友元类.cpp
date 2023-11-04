#include<iostream>
#include<string>
using namespace std;

//运作原理 在堆区开辟空间 然后进行访问

class Building;

class GoodGay//4
{
public:
	GoodGay();//1 b = new Building;

	void visit();//2 参观函数 访问building中的属性 b->xxxxx;
public:
	Building* b;//3
};

class Building//3
{
	friend class GoodGay;//4
public:
	Building();//5
public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

GoodGay::GoodGay()//1
{
	//创建建筑物对象
	b = new Building;
}

void GoodGay::visit()//2
{
	cout << "好基友类正在访问：" << b->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << b->m_BedRoom << endl;
}

//类外写构造函数函数
Building::Building()//5
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
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