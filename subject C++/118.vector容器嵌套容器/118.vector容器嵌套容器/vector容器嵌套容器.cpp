#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<vector<int>> v;
	
	//����С����
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	//��С�������������
	v1.push_back(10);
	v2.push_back(20);
	v3.push_back(30);

	//��С���������������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//ͨ��������,���������ݱ���һ��
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