#include<iostream>
using namespace std;

int main() 
{
	//switch���
	//����Ӱ����
	// 10~9 ����
	// 8~7  �ǳ���
	// 6~5  һ��
	// 5���� ����

	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ���д��" << endl;
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << endl;
	//3.�����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
		if (score > 10)
		{
			cout << "���в��ǰ�" << endl;
		}
		case 10:
			cout << "����Ϊ�Ǿ����Ӱ" << endl; break;//break�����˳���ǰ��֧
		case 9:
			cout << "����Ϊ�Ǿ����Ӱ" << endl;
		case 8:
			cout << "����Ϊ�ǳ���" << endl; break;
		case 7:
			cout << "����Ϊ�ǳ���" << endl;
		case 6:
			cout << "����Ϊ��һ��" << endl; break;
		case 5:
			cout << "����Ϊ��һ��" << endl;
		default:
			cout << "���Ӱ���Ǹ�����" << endl;
	
	}
	//if �� switch ����
	//switch ȱ��,�ж�ʱֻ�������ͻ����ַ���,��������һ������
	//switch �ŵ�,�ṹ����,ִ��������
	system("pause");
	return 0;
}