#include<iostream>
using namespace std;

//多态

class animal
{
public:
	//虚函数
	void virtual speak()
	{
		cout << "动物在说话" << endl;
	}
};

class cat :public animal
{
public:
	//重写 函数返回值类型 函数名 参数列表 完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class dog :public animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话,那么这个函数地址就不能提前绑定
//需要在运行阶段进行绑定,地址晚绑定

//动态多态满足条件
//1. 有继承关系
//2. 子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用 执行子类对象

void dospeak(animal &animal)//animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	cat cat;
	dospeak(cat);
	dog dog;
	dospeak(dog);
}

int main()
{
	test01();
}