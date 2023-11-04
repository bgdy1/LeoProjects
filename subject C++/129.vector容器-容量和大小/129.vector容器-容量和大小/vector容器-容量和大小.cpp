#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量:" << v1.capacity() << endl;
		cout << "v1的大小:" << v1.size() << endl;
		cout << endl;
	}

	v1.resize(7);
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1 resize15 不为空" << endl;
		cout << "v1的容量:" << v1.capacity() << endl;
		cout << "v1的大小:" << v1.size() << endl;
		cout << endl;
	}

	v1.resize(15, 100);
	printVector(v1);
	if (!v1.empty())
	{
		cout << "v1 resize15 不为空" << endl;
		cout << "v1的容量:" << v1.capacity() << endl;
		cout << "v1的大小:" << v1.size() << endl;
	}
}

int main()
{
	test01();
}