#include<iostream>
using namespace std;

int main()
{
	//1.������ֻС�����ص�����
	int arr[] = { 300,350,200,400,250 };
	
	//2.���������ҵ����ֵ
	int max = 0;//���϶�һ�����ֵΪ0
	
	for (int i = 0; i < 5; i++)//�����ݽ��и��� �������max�Ļ��͸���
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//3.��ӡ���ֵ
	cout <<"���ص�С������Ϊ:"<< max << endl;

	return 0;
	system("pause");
}