#include<iostream>
using namespace std;

//���ַ���Ȩ��
//����Ȩ�� public	��Ա  �����ڿ��Է��� ������Է���
//����Ȩ�� protected	��Ա  ���ڿ��Է���   ���ⲻ�ɷ���
//˽��Ȩ�� private	��Ա  ���ڿ��Է���   ���ⲻ�ɷ���

class person
{
public:
	//����Ȩ��
	string m_name;//����
protected:
	//����Ȩ��
	string m_car;//����
private:
	int m_password;//���п�����

public:
	void func()
	{
		//���ڶ����ʵõ�
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}

};

int main()
{
	person p1;

	p1.m_name = "����";
  //p1.m_car = "����";      //����Ȩ������ ��������ʲ���
  //p1.m_passward = 123456;//˽��Ȩ������ ��������ʲ���
	p1.func();
	

}