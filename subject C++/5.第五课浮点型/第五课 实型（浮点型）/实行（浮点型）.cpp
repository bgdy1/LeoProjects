#include<iostream>
using namespace std;

int main() {

	//1.单精度 flost
	//2.双精度 double
	//3.默认情况下输出一个小数, 会显示出六位有效数字

	float f1 = 3.1415926f;//如果不加f 系统会默认是double
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;//四 因为默认情况下小数只会显示六位有效数字
	cout << "d1=" << d1 << endl;

	//统计float 占用的内存空间
	cout <<"float占用的内存空间" << sizeof(f1) << endl;//4字节
	
	//统计double 占用的内存空间
	cout << "double占用的内存空间" << sizeof(d1) << endl;//8字节

	//科学计数法（很少用 只是看看）
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;
	
	system("pause");
	return 0;
}