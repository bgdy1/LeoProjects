#include<iostream>
using namespace std;

int main()
{
	//1.��ʾ����߿�����
	int score = 0;
	cout << "������߿����Է���" << endl;
	cin >> score;
	//2.��ʾ�߿�����
	cout << "������ķ���Ϊ" << score << endl;
	//3.�ж�
	//�����600 һ��
		//����700 ����
		//����650 �廪
		//����	  �˴�
	//�����500 ����
	//�����400 ����
	//������� δ���ϱ���
	if (score > 750)
	{
		cout << "���������� ɵ��" << endl;
	}
	else if (score > 600)
	{
		cout << "��ϲ����һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else
		{
			cout << "���ܿ����˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�����������ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "���ٽ�����" << endl;
	}


	system("pause");
	return 0;
}