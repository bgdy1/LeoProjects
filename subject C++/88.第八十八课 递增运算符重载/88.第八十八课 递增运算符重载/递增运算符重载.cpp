#include<iostream>
using namespace std;

//���ص��������

//�Զ�������
class integer
{
	friend ostream& operator<<(ostream& cout, integer i);
public:
	integer()
	{
		num = 0;
	}

	//����ǰ��++�����

	//��������Ϊ��һֱ��һ�����ݽ��е���: ++(++integer)
	integer& operator++()
	{
		//�Ƚ���++����
		num++;

		//�ڽ�����������
		return *this;
	}

	//���غ���++�����
	// int����ռλ����,������������ǰ�úͺ��������
	integer operator++(int)
	{
		//�� ��¼��ʱ���
		integer temp = *this;
		//�� ����
		num++;
		//��󽫼�¼������з��ز���
		return temp;
	}

private:
	int num;
};

//�������������
ostream& operator<<(ostream& cout, integer i)
{
	cout << i.num << endl;
	return cout;
}

void test01()
{
	integer i;
	cout << ++i << endl;
	cout << i << endl;
}

void test02()
{
	integer i;
	cout << i++ << endl;
	cout << i << endl;
}

int main()
{
	test01();
	test02();
}