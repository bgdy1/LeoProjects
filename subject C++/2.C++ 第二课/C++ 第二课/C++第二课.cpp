#include<iostream>
using namespace std;
//�����Ķ��巽ʽ
//1.#define �곣��
//2.const���εı���

//1.#define �곣��
#define day 7

int main() {
	//day = 14;һ������ ��Ϊ�����趨��day 7 �ǳ�����һ�����ľͻᱨ��
	
	//��ʾ��һ���ܹ��У�������7�� �� ��������
	cout << "һ���ܹ��У�" << day << "��" << endl;
	
	//2.const���εı���
	const int month = 12;
	//month = 24; //���� ��Ϊ��������

	//�����ÿ���ж����£� ������12�� �� ��������
	cout << "ÿ���ж����£�" << month << "��" << endl;
	
	//ϵͳ��ͣ
	system("pause");
	return 0;
}