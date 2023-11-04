#include<iostream>
using namespace std;


int main() {

	//转义字符

	//换行符 \n
	cout << "hello world!!\n";
	
	//反斜杠 \\ 
	cout << "\\" << endl;//两个反斜杠输出一个\
	
	//水平制表符 \t
	cout << "aaaa\thelloworld" << endl;//可以整齐的输出数据
	cout << "aa\thelloworld" << endl;
	cout << "aaa\thelloworld" << endl;
	
	
	system("pause"); 
	return 0;

}