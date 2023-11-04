#include<iostream>
#include<string>
using namespace std;

#define max 2000

//�����ϵ�˵Ľṹ��
struct person
{
	string m_name;	//����
	int m_sex;		 //1. ��  2.Ů
	int m_age;		 //����
	string m_phone;	 //�绰
	string m_address; //סַ


	person()
	{
		m_sex = 0;
		m_age = 0;
	}
};

//���ͨѶ¼�Ľṹ��
struct addressbooks
{

	//ͨѶ¼�б������ϵ������
	struct person personArray[max];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_size;

	addressbooks()
	{
		m_size = 0;
	}
};

//1.�����ϵ��
void addperson(addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ����� �������ֹͣ���
	if (abs->m_size == max)
	{
		cout << "ͨѶ¼����(����2000),�޷����" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�     1.___��	2.___Ů��" << endl;
		
		//����������1��2���˳�ѭ�� ������� �����ѭ��
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;
		//�绰
		cout << "��������ϵ�绰 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_phone = phone;
		//סַ
		cout << "�������ַ " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;

		//����ͨѶ¼����
		abs->m_size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//2.��ʾ��ϵ��
void showperson(addressbooks* abs)
{
	//���ͨѶ¼����Ϊ0��ʾͨѶ¼�ǿյ�
	if (abs->m_size == 0)
	{
		cout << "��ǰͨѶ¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "����: " << abs->personArray[i].m_name << "���䣺" << abs->personArray[i].m_age << " �Ա�" << (abs->personArray[i].m_sex == 1 ? " �� " : " Ů ") << "�绰���룺" << abs->personArray->m_phone << " סַ��" << abs->personArray[i].m_address << endl;
		}
	}
}

//�����ϵ���Ƿ����
int isExit(addressbooks *abs,string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//�ҵ��û����������
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	//�Ҳ��� ����-1
	return -1;
}
//ɾ��ָ������ϵ��
void deletePerson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		//�ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_size; i++)
		{
			//����Ǩ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		//������ϵ������
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void findPerson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�
	int ret = isExit(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "����: " << abs->personArray[ret].m_name << " ���䣺" << abs->personArray[ret].m_age << " �Ա�" << (abs->personArray[ret].m_sex == 1 ? " �� " : " Ů ") << "�绰���룺" << abs->personArray->m_phone << " סַ��" << abs->personArray[ret].m_address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}

//�޸���ϵ��
void modifyPerson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��: " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		//�����ϵ��
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�     1.___��	2.___Ů��" << endl;

		//����������1��2���˳�ѭ�� ������� �����ѭ��
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//�绰
		cout << "��������ϵ�绰 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//סַ
		cout << "�������ַ " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void clearPerson(addressbooks* abs)
{
	cout << "���������Ҫ��������: 1_��  2_��" << endl;
	int whether;
	while (1)
	{
		cin >> whether;
		if (whether == 1)
		{
			abs->m_size = 0;
			cout << "��ϵ���б������" << endl;
			break;
		}
		else if (whether == 2)
		{
			cout << "��ȡ����ղ���" << endl;
			break;
		}
		else
			cout << "�������� ����������" << endl;
	}
	system("pause");
	system("cls");
}

//�˵�����
void showmenu()
{
	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
}

int main()
{
	//����һ��ͨѶ¼�Ľṹ�����
	addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ����Ա����
	abs.m_size = 0;
	//����һ���û�ѡ������ı���
	int select = 0;
	
	//�˵��ĵ���
	while(1)
	{
		cout << "����������Ҫ�ķ���" << endl;
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:		//1.�����ϵ��
			addperson(&abs); //���õ�ַ���� ���������β�
			break;

		case 2:	//2.��ʾ��ϵ��
			showperson(&abs);
			break;

		case 3:	
		{
			//3.ɾ����ϵ��
			deletePerson(&abs);
			break;
		}
		
		case 4:		//4.������ϵ��
			findPerson(&abs);
			break;

		case 5:		//5.�޸���ϵ��
			modifyPerson(&abs);
			break;

		case 6:		//6.�����ϵ��
			clearPerson(&abs);
			break;

		case 0:		//0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}