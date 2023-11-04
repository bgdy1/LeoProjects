#include<iostream>
using namespace std;

int main() {

	//整形
	//1.短整型 取值：（-32768~36767）
	short num1 = 36768;//因为超出取值范围所以出现错误
	
	//2.整形 
	int num2 = 32768;//正常因为没有超越取值范围
	
	//3.长整型
	long num3 = 10;
	
	//4.长长整形
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	
	system("pause");
		return 0;
}