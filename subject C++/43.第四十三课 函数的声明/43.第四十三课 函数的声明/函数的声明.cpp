#include<iostream>
using namespace std;

//����������,ʵ�������������ֽ��бȽ�,���ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú���������
int compare(int a, int b);

int main()
{
	cout << "please enter two numbers" << endl;

	int a, b;
	cin >> a >> b;
	cout << "the answer is " << compare(a, b) << endl;


	system("pause");
	return 0;
}


//����
int compare(int a, int b)
{
	return a > b ? a : b;
}