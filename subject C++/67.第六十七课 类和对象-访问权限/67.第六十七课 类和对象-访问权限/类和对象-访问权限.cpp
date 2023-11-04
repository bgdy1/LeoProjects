#include<iostream>
using namespace std;

//三种访问权限
//公共权限 public	成员  在类内可以访问 类外可以访问
//保护权限 protected	成员  类内可以访问   类外不可访问
//私有权限 private	成员  类内可以访问   类外不可访问

class person
{
public:
	//公共权限
	string m_name;//姓名
protected:
	//保护权限
	string m_car;//汽车
private:
	int m_password;//银行卡密码

public:
	void func()
	{
		//类内都访问得到
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}

};

int main()
{
	person p1;

	p1.m_name = "李四";
  //p1.m_car = "宝马";      //保护权限内容 在类外访问不到
  //p1.m_passward = 123456;//私有权限内容 在类外访问不到
	p1.func();
	

}