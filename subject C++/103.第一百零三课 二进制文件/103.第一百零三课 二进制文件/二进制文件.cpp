#include<iostream>
#include<fstream>
using namespace std;

//二进制文件 写文件

class person
{
public:
	char m_name[64];
	int m_Age;
};

//void test01()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//}

void test02()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "打开失败" << endl;
		return;
	}
	person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名 = " << p.m_name << "年龄" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	//test01();
	test02();
}