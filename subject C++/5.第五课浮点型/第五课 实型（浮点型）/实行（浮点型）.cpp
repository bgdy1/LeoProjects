#include<iostream>
using namespace std;

int main() {

	//1.������ flost
	//2.˫���� double
	//3.Ĭ����������һ��С��, ����ʾ����λ��Ч����

	float f1 = 3.1415926f;//�������f ϵͳ��Ĭ����double
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;//�� ��ΪĬ�������С��ֻ����ʾ��λ��Ч����
	cout << "d1=" << d1 << endl;

	//ͳ��float ռ�õ��ڴ�ռ�
	cout <<"floatռ�õ��ڴ�ռ�" << sizeof(f1) << endl;//4�ֽ�
	
	//ͳ��double ռ�õ��ڴ�ռ�
	cout << "doubleռ�õ��ڴ�ռ�" << sizeof(d1) << endl;//8�ֽ�

	//��ѧ�������������� ֻ�ǿ�����
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;
	
	system("pause");
	return 0;
}