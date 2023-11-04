#include<iostream>
using namespace std;

//ÀàÄ£°åÓë¼Ì³Ğ
template<typename T> class Base
{
public:
	T m;
};

template<typename T1, typename T2> class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test01()
{
	Son2<int, char>S2;
}

int main()
{
	test01();
}