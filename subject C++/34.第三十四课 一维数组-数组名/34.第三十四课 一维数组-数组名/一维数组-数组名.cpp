#include<iostream>
using namespace std;
int main()
{
	//����������;
	
	//1.����ͨ��������ͳ��������������ռ�õ��ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//int
	cout << "��������(arr)���ڴ�����ռ���ڴ�ռ�Ϊ:" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ�����ڴ�����ռ�õ��ڴ�ռ�Ϊ:" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ:" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2.���Ի�ȡ�������ڴ��е��׵�ַ
	cout << "����(arr)�׵�ַΪ" <<arr << endl;
	cout << "����(arr)�׵�ַ(������Ϊ" <<(int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַ(����)Ϊ" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַ(����)Ϊ" << (int)&arr[1] << endl;
	
	
	return 0;
	system("pause");
}