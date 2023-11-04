#include<iostream>
#include<thread>
#include<string>

void printHello(std::string message)
{
	std::cout << message << std::endl;

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return;
}

void test01()
{
	//1.创建线程
	std::thread thread1(printHello, "helloworld!");//参数二为函数的第一个参数	
	//thread1.detach(); 将thread1线程变为后台运行 之后main继续往下执行
	if (thread1.joinable())
	{
		thread1.join(); //检查是否线程还在运行 如果有的话卡在这里 不继续执行以下代码
	}
	
	std::cout << "over" << std::endl;
}

int main()
{
	test01();

	return 0;
}