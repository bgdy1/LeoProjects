#include<iostream>
using namespace std;

//类对象作为类成员

//手机 类
class phone
{
public:
	phone(string pName)
	{
		cout << "有参构造函数调用" << endl;
		m_PName = pName;
	}
	//手机品牌名称
	string m_PName;
};

class person
{
public:
	person(string name, string pName):m_Name(name),m_Phone(pName)
	{

	}

	//姓名
	string m_Name;
	//手机
	phone m_Phone;
	
};


//当其他类的对象作为本类的成员，构造时候先构造类的对象 再构造自身,析构函数则相反
void test01()
{
	person p("张三", "苹果max");

	cout <<p.m_Name<< "拿着:" << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();
}