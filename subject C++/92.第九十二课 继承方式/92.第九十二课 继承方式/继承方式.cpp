#include<iostream>
using namespace std;

//继承方式 
//公共继承
class base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son1 :public base
{
public:
	void func()
	{
		a = 10;//父类中的公共权限成员 到子类中仍然是公共权限
		b = 20;//父类中的保护权限成员 到子类中依然是保护权限
		//c = 30 不可访问父类私有成员
	}
};

class son2 :protected base
{
public:
	void func()
	{
		a = 10;//父类中公共成员 到了子类变成保护权限
		b = 20;//父类中保护权限 到了子类仍然保持
		//c = 30; 不可访问父类私有成员
	}
};

class son3 :private base
{
public:
	void func()
	{
		a = 10;//父类中公共成员 到子类中变为私有成员
		b = 20;//父类中保护乘员 到子类中变为私有成员
		//c = 30; 不可访问父类私有成员
	}
};

void test01()
{
	son1 s1;
	s1.a = 100;
	//s1.m_B = 100; 保护权限类外无法访问
}

void test02()
{
	son2 s2;
	//s2.a = 10; a变为保护权限 因此类外访问不到
	//s2.b = 20; b变成保护权限 不可以访问
	//s2.c = 30;不可访问
}

void test03()
{
	son3 s3;
	//s3.a = 10; //a变为保护权限 因此类外访问不到
	//s3.b = 20; //b变成保护权限 不可以访问
	//s3.c = 30;//不可访问
}

int main()
{

}