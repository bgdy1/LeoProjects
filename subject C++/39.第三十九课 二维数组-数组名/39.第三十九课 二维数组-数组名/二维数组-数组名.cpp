#include<iostream>
using namespace std;

int main()
{
	//��ά�����������;

	//1.���Բ鿴ռ�ô�С
	int arr[2][4] =
	{
		{1,2,3,4},
		{5,6,7,8}
	};
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�Ϊ" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�Ϊ" << sizeof(arr[0][0]) << endl;

	cout << "��ά���������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	
	//2.���Բ鿴��ά�ռ���׵�ַ
	cout << "��ά�ռ���׵�ַΪ" << (int)arr << endl;
	cout << "��ά����ĵ�һ�е�һ��" << (int)&arr[0][0] << endl;
	
	cout << "��ά����ڶ��е��׵�ַΪ" << (int)arr[1] << endl;
	cout << "��ά����ڶ��е�һ�е��׵�ַΪ" << (int)&arr[1][0] << endl;
	
	system("pause");
	return 0;
}