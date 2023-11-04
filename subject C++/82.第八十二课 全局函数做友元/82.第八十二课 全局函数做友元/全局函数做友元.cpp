#include<iostream>
using namespace std;

class building
{
	//goodGay现在可以访问building中私有成员
	friend void goodGay(building* building);

public:
	building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

public:
	string m_SittingRoom;//客厅
	
private:
	string m_BedRoom;//卧室
};

//全局函数
void goodGay(building *building)
{
	cout << "好基友全局函数 正在访问:" << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问:" << building->m_BedRoom << endl;
}

void test01()
{
	building b;
	goodGay(&b);
}

int main()
{
	test01();
}