#include<iostream>
#include<fstream>
using namespace std;

//�������ļ� д�ļ�

class person
{
public:
	char m_name[64];
	int m_Age;
};

//void test01()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//}

void test02()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "��ʧ��" << endl;
		return;
	}
	person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "���� = " << p.m_name << "����" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	//test01();
	test02();
}