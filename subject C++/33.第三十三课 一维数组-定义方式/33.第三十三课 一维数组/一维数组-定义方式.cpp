#include<iostream>
using namespace std;
int main()
{
	//1.一维数组的定义方式

	//数组三种定义方式
	//1. 数据类型 数组名[ 数组长度 ];
	//2. 数据类型 数组名[ 数组长度 ] = {值1,值2...};
	//3. 数据类型 数组名[ ] = { 值1，值2....};

	//1.数据类型 数组名[ 数据长度 ];
	int arr1[5];
	
	//给数组中的元素进行赋值
	//数据类型的下标是从0开始索引的
	arr1[0] = 10;
	arr1[1] = 20;  
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;
	
	//访问数据元素
	cout << arr1[0] << endl;
	cout << arr1[1] << endl;
	cout << arr1[2] << endl;
	cout << arr1[3] << endl;
	cout << arr1[4] << endl;
	
	
	//2.数据类型 数组名[ 数组长度 ] = {值1，值2...};
	//如在初始化数据的时候没有赋值,将会自动用0填补
	int arr2[5] = { 10,20,30,40,50 };

	//利用for循环访问数据元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	//3.数据类型 数组名[ ] = {值1,值2...};
	int arr3[] = { 10,20,30,40,50 };
	
	//访问数据元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << endl;
	}
	
	return 0;
	system("pause");
}