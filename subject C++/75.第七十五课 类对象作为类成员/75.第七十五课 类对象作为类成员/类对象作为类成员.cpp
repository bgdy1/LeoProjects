#include<iostream>
using namespace std;

//�������Ϊ���Ա

//�ֻ� ��
class phone
{
public:
	phone(string pName)
	{
		cout << "�вι��캯������" << endl;
		m_PName = pName;
	}
	//�ֻ�Ʒ������
	string m_PName;
};

class person
{
public:
	person(string name, string pName):m_Name(name),m_Phone(pName)
	{

	}

	//����
	string m_Name;
	//�ֻ�
	phone m_Phone;
	
};


//��������Ķ�����Ϊ����ĳ�Ա������ʱ���ȹ�����Ķ��� �ٹ�������,�����������෴
void test01()
{
	person p("����", "ƻ��max");

	cout <<p.m_Name<< "����:" << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();
}