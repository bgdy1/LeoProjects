#include<iostream>
using namespace std;

class building
{
	//goodGay���ڿ��Է���building��˽�г�Ա
	friend void goodGay(building* building);

public:
	building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;//����
	
private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(building *building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_BedRoom << endl;
}

void test01()
{
	building b;
	goodGay(&b);
}

int main()
{
	test01();
}