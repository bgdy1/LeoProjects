#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//void test01()
//{
//	//1.����ͷ�ļ�fstream
//
//	//2.����������
//	ofstream ofs;
//
//	//3.ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4.д����
//	ofs << "����:����" << endl;
//	ofs << "�Ա�:��" << endl;
//	ofs << "����:18" << endl;
//
//	//5.�ر��ļ�
//	ofs.close();
//	
//}

void test02()
{
	ifstream ifs;
	
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//���ļ�

	//��һ��
	char buf[1024] = { 0 };
	while (ifs >> buf)//��ifs�����buf����
	{
		cout << buf << endl;
	}
	
	//�ڶ���
	/*char buf[1024] = { 0 };//�������ʼ��
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//������
	//string buf;

	//while (getline(ifs, buf))//getline��Ҫ#include<string>
	//{
	//	cout << buf << endl;
	//}

	//������
	//char c;
	//while ((c = ifs.get()) != EOF) //EOF(end of file)
	//{
	//	cout << c;
	//}

	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	//test01();
	test02();
}