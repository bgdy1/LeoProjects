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
	//1.�����߳�
	std::thread thread1(printHello, "helloworld!");//������Ϊ�����ĵ�һ������	
	//thread1.detach(); ��thread1�̱߳�Ϊ��̨���� ֮��main��������ִ��
	if (thread1.joinable())
	{
		thread1.join(); //����Ƿ��̻߳������� ����еĻ��������� ������ִ�����´���
	}
	
	std::cout << "over" << std::endl;
}

int main()
{
	test01();

	return 0;
}