#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//void test01()
//{
//	//1.包括头文件fstream
//
//	//2.创建流对象
//	ofstream ofs;
//
//	//3.指定打开方式
//	ofs.open("test.txt", ios::out);
//
//	//4.写内容
//	ofs << "姓名:张三" << endl;
//	ofs << "性别:男" << endl;
//	ofs << "年龄:18" << endl;
//
//	//5.关闭文件
//	ofs.close();
//	
//}

void test02()
{
	ifstream ifs;
	
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//读文件

	//第一种
	char buf[1024] = { 0 };
	while (ifs >> buf)//将ifs输入进buf数组
	{
		cout << buf << endl;
	}
	
	//第二种
	/*char buf[1024] = { 0 };//给数组初始化
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//第三种
	//string buf;

	//while (getline(ifs, buf))//getline需要#include<string>
	//{
	//	cout << buf << endl;
	//}

	//第四种
	//char c;
	//while ((c = ifs.get()) != EOF) //EOF(end of file)
	//{
	//	cout << c;
	//}

	//5.关闭文件
	ifs.close();
}

int main()
{
	//test01();
	test02();
}