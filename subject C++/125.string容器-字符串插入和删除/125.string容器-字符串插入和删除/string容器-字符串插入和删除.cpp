#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "hello";
	//����
	str.insert(1, "111");//h111ello ���ֱ�Ū������������Ҳ��
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1,3);//ɾ�ڼ���������
	cout << "str = " << str << endl;
}

int main()
{
	test01();
}