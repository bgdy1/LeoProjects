#include<iostream>
using namespace std;

const double PI = 3.14;
//���һ��Բ��,��ԭ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*��*R

//class�������һ����,���������ŵľ���������
class Circle
{
//����Ȩ��
//����Ȩ��
public:
	
	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//ͨ��Բ�� ���������Բ������
	//ʵ����
	Circle c1;

	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;

	//2*PI*10 = 62.8
	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}