#include<iostream>
using namespace std;

int main()
{
	//(1.)
	//ѡ��ṹ if���
	//�û��������, �����������600, ��Ϊ����һ����ѧ,����Ļ�����

	//1.�û����������
	int score;
	cout << "���������ķ���:" << endl;
	cin >> score;
	
	//2.��ӡ�û�����ķ���
	cout << "���ķ���Ϊ" << score << endl;
	
	//3.�жϷ����Ƿ����600, �������, ��ô���, ���С�� ���so sad
	if (score > 600)
	{
		cout << "congratulation" << endl;
	}
	else 
	{
		cout << "so sad" << endl;
	}
	
	
	system("pause");
	return 0;
}