#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<vector<int>> v;
	
	//创建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	//向小容器中添加数据
	v1.push_back(10);
	v2.push_back(20);
	v3.push_back(30);

	//将小容器插入大容器内
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//通过大容器,把所有数据遍历一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator v_it = (*it).begin(); v_it != (*it).end(); v_it++)
		{
			cout << *v_it << " ";
		}
		cout << endl;
	}
}

int main()
{
	test01();
}