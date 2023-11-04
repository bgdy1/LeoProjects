#pragma once//��ֹͷ�ļ��ظ�
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std;

class workerManager
{
public:
	//���캯��
	workerManager();

	//��ʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ�� ָ�� Worker* worker[];
	Worker** m_EmpArray;

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ���ļ��е�����
	int get_EmpNum();

	//���ļ���������������m_EmpArray��
	void intt_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�� �����ڷ���-1
	int IsExist(int id);

	//����ְ������
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~workerManager();
};