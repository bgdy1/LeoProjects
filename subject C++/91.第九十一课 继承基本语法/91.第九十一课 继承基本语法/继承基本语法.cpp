#include<iostream>
using namespace std;

//普通实现页面

//继承实现页面

//公共页面类
class basepage
{
public:
	void header()
	{
		cout << "首页,公开课,登录,注册...(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心,交流合作,站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "java,python,C++...(公共分类列表)" << endl;
	}
};

class java :public basepage
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};

class python :public basepage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};

class cpp :public basepage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

void test01()
{
	cout << "java下载视频页面如下：" << endl;
	java j;
	j.header();
	j.footer();
	j.left();
	j.content();

	cout << "--------------------------" << endl;
	cout << "python下载视频页面如下：" << endl;
	python p;
	p.header();
	p.footer();
	p.left();
	p.content();

	cout << "--------------------------" << endl;
	cout << "cpp下载视频页面如下：" << endl;
	cpp c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main()
{
	test01();
}