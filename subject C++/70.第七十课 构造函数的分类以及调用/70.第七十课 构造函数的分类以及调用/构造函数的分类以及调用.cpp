#include<iostream>
using namespace std;

//1.构造函数的分类以及调用
//分类	
//	按照参数分类	    无参构造(默认构造)和有参构造
//  按照类型进行分类		普通构造和拷贝构造
class person
{
public:
	//构造函数
	person()
	{
		cout << "person的无参构造函数调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person的有参构造函数调用" << endl;
	}
	
	//拷贝构造函数
	person(const person *p)
	{
		//将传入的人身上的所有属性,拷贝到我身上
		age = p->age;
		cout << "person的拷贝构造函数调用" << endl;
	}

	~person()
	{
		cout << "person的析构函数调用" << endl;
	}

	int age;
};

//调用
void test01()
{
	//1.括号法
	//person p;
	//person p2(10);//调用有参构造
	//person p3(p2);
	
	//调用默认构造函数时候,不要加() 因为下面这行代码,编译器会认识是一个函数的声名:
	//person p1();

	//cout << "p2的年龄为" << p2.age << endl;
	//cout << "p3的年龄为" << p3.age << endl;

	//2.显示法
	//person p1;
	//person p2 = person(10);
	//person p3 = person(p2);

	//person(10);//匿名对象 特点:当前行执行结束后,系统会立即回收掉匿名对象

	//不要利用拷贝构造函数来初始化一个匿名的对象 编译器认为: person(p3) == person p3;对象声明
	//person(p3);

	//3.隐式转换法
	person p4 = 10;//相当于写了:person p4 = person(10);
	person p5 = p4;
}

int main()
{
	test01();
}