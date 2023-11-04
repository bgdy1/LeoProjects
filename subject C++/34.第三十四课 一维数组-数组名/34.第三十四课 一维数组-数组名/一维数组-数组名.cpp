#include<iostream>
using namespace std;
int main()
{
	//数组名的用途
	
	//1.可以通过数组名统计整个数组数组占用的内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//int
	cout << "整个数组(arr)在内存中所占的内存空间为:" << sizeof(arr) << endl;
	cout << "每个元素在内存中所占用的内存空间为:" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2.可以获取数组在内存中的首地址
	cout << "数组(arr)首地址为" <<arr << endl;
	cout << "数组(arr)首地址(整数）为" <<(int)arr << endl;
	cout << "数组中第一个元素地址(整数)为" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址(整数)为" << (int)&arr[1] << endl;
	
	
	return 0;
	system("pause");
}