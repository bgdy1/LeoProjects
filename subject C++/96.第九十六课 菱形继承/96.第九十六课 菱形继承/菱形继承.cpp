#include<iostream>
using namespace std;

//动物类
class animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形问题、
//在继承之前加上virtual关键字 变为虚继承
// animal类 称为虚基类
//羊类
class sheep :virtual public animal{};
//驼类
class camel :virtual public animal{};
//羊驼类
class sheepcamel :public sheep, public camel{};

void test01()
{
	sheepcamel sc;
	sc.sheep::m_Age = 18;
	sc.camel::m_Age = 28;
	//当菱形继承,两个父类拥有相同数据 需要加作用域区分
	cout << sc.sheep::m_Age << endl;
	cout << sc.camel::m_Age << endl;
	cout << sc.m_Age << endl;
}

int main()
{
	test01();
}