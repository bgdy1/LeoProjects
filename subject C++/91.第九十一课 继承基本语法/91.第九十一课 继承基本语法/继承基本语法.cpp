#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//�̳�ʵ��ҳ��

//����ҳ����
class basepage
{
public:
	void header()
	{
		cout << "��ҳ,������,��¼,ע��...(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "java,python,C++...(���������б�)" << endl;
	}
};

class java :public basepage
{
public:
	void content()
	{
		cout << "javaѧ����Ƶ" << endl;
	}
};

class python :public basepage
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};

class cpp :public basepage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test01()
{
	cout << "java������Ƶҳ�����£�" << endl;
	java j;
	j.header();
	j.footer();
	j.left();
	j.content();

	cout << "--------------------------" << endl;
	cout << "python������Ƶҳ�����£�" << endl;
	python p;
	p.header();
	p.footer();
	p.left();
	p.content();

	cout << "--------------------------" << endl;
	cout << "cpp������Ƶҳ�����£�" << endl;
	cpp c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main()
{
	test01();
}