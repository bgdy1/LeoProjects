#include<iostream>
using namespace std;

int main() 
{
	//1.ϵͳ���������
	int num = rand() % 100; //����0-99�������
	int val = 0;
	//2.��ҽ��в²�
	while (1)
	{
		cout << "����������" << endl;
		cin >> val;

		//3.�ж���ҵĲ²�
		if (val > num)
		{
			cout << "�²����ִ���" << endl;
		}
		else if (val < num)
		{
			cout << "�²�����С��" << endl;
		}
		else
		{
			cout << "��ϲ�¶��ˣ�" << endl;
			break;
		}

	}

		system("pause");
		return 0;
	
}