#include<iostream>
using namespace std;

int main() {
	
	//1.�ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << ch << endl;
	
	//2.�ַ��ͱ�����ռ���ڴ��С//ֻռ1�ֽ�
	sizeof(char);
	cout << "char�ַ��ͱ�����ռ���ڴ�ռ�:" << sizeof(char) << endl;
	
	//3.�ַ��ͱ�����������
	//��һ�ִ��������char ch2 = "b";
	//�����ַ��ͱ�����ʱ��Ҫ�õ�����
	
	//�ڶ��ִ������:char ch2 = 'abcdef'
	//�����ַ��ͱ�����ʱ�� ��������ֻ������һ���ַ�
	
	
	//4.�ַ��ͱ�����Ӧ��ASCII����
	//ASCII�������磺a - 97
				  //b - 65
	cout << int(ch) << endl;
	//ǿ�н�����ch�ĳ�int������ʽ

		system("pause");
		return 0;
}