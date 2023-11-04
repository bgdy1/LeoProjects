#include<iostream>
using namespace std;

int main() 
{

	//1.创建bool的数据类型
	bool flag = true;//true代表真
	cout << flag << endl;//true本质是1
	
	flag = false;//false代表假
	cout << flag << endl;//false本质是0
	
	//本质上 1代表真 2代表假
	
	//2.查看bool所占的内存空间
	cout << "bool类型所占内存大小是:" <<sizeof(bool) << endl;




	system("pause");
		return 0;
}