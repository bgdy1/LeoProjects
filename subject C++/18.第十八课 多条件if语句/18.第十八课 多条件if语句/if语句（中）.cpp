#include<iostream>
using namespace std;

int main()
{
	//ѡ��ṹ ������if���

	//1. �û��������
	int score = 0;
	cout << "���������ĸ߿�����" << endl;
	cin >> score;
	//2.��ʾ�û�����ķ���
	cout << "���ĸ߿�������:" << score << endl;
	//3.�ж�
	// �������600������һ��
	// �������500�����϶���
	// �������400����������
	// ǰ������û������, δ���ϱ���
	if (score > 600)
	{
		cout << "��ϲ����һ����ѧ" << endl;
	}
	else if (score > 500)
	{
		cout << "��ϲ���������ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ����������ѧ" << endl;
	}
	else //ǧ��Ҫ��else����д�κ�����
	{
		cout << "so sad " << endl;
	}
	
	system("pause");
	return 0;
}