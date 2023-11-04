#include<iostream>
using namespace std;

int main()
{
	//二维数组的名称用途

	//1.可以查看占用大小
	int arr[2][4] =
	{
		{1,2,3,4},
		{5,6,7,8}
	};
	cout << "二维数组占用的内存空间为" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存为" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存为" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	
	//2.可以查看二维空间的首地址
	cout << "二维空间的首地址为" << (int)arr << endl;
	cout << "二维数组的第一行第一列" << (int)&arr[0][0] << endl;
	
	cout << "二维数组第二行的首地址为" << (int)arr[1] << endl;
	cout << "二维数组第二行第一列的首地址为" << (int)&arr[1][0] << endl;
	
	system("pause");
	return 0;
}