#include<iostream>
using namespace std;

int main()
{
	//while循环
	//在屏幕中打印0——9这十个数字
	
	int num = 0;
	cout << num << endl;
	
	//while()中填入循环条件
	//注意事项：在写循环时要避免死循环的出现
	while(num<9)
	{
		num++;
	
		cout << num << endl;
	}
	system("pause");
	return 0;
}