#include "workerManager.h"

//���캯��
workerManager::workerManager()
{
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ�

	if (!ifs.is_open())
	{
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ��ָ�� ��ֹ�ڴ�й©
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	
	//2.�ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ��ָ�� ��ֹ�ڴ�й©
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//3.�ļ����� ���Ҽ�¼����
	this->m_EmpNum = this->get_EmpNum();
	//���ٿռ��ʼ����Ա���� m_EmpArray
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��ڵĶ�������� m_EmpArray��
	this->intt_Emp();
}

//��ʾ�˵�
void workerManager::Show_Menu()
{
	cout << "*********************************" << endl;
	cout << "*******��ӭʹ��ְ������ϵͳ!*******" << endl;
	cout << "********* 0.�˳�������� *********" << endl;
	cout << "********* 1.����ְ����Ϣ *********" << endl;
	cout << "********* 2.��ʾְ����Ϣ *********" << endl;
	cout << "********* 3.ɾ����ְְ�� *********" << endl;
	cout << "********* 4.�޸�ְ����Ϣ *********" << endl;
	cout << "********* 5.����ְ����Ϣ *********" << endl;
	cout << "********* 6.��������ĵ� *********" << endl;
	cout << endl;
}

//�˳�ϵͳ
void workerManager::ExitSystem()
{
	cout << "��ӭ�´���ʹ��" << endl;
	system("pause");
	exit(0);
}

void workerManager::Add_Emp()
{
	cout << "����������ְ������: " << endl;

	int addNum = 0;//���������û�������

	cin >> addNum;

	if (addNum > 0)
	{
		//����

		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum; //�¿ռ��С = ԭ����¼���� + ��������

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ���Ŀռ俽�����µĿռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������µ�����
		for (int i = 0; i < addNum; i++)
		{
			cout << "������� " << i + 1 << " ����ְ�����: " << endl;
			int id;
			cin >> id;

			if (this->IsExist(id) != -1)//����id�Ƿ���� ���������ʾ�û�
			{
				cout << "ְ������Ѿ�����" << endl;
				break;
			}

			cout << "������� " << i + 1 << " ����ְ������" << endl;
			string name;
			cin >> name;

			cout << "��ѡ��ְ����λ:" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ܲ�" << endl;
			int dSelect;
			cin >> dSelect;

			Worker* worker = NULL;//��ʼ����ֹ�ڴ�й©
			
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��������Ա�����浽������
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		//�ı�ָ��ָ��
		m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		this->Sort_Emp();

		//�������ݵ�FILENAME
		this->save();

		//�ļ���Ϊ��
		m_FileIsEmpty = false;

		//��ʾ���ӳɹ�
		cout << "���ӳɹ� " << addNum << "����ְ��" << endl;
	}
	else
		cout << "�������" << endl;
	
	system("pause");
	system("cls");
}

void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//ʹ������ķ�ʽ���ļ� -- д�ļ�
	//��ÿһ���˵��ļ�д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//�ر��ļ�
	ofs.close();
}

int workerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}

	return num;
}

void workerManager::intt_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)//��ְͨ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

void workerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)//����ļ�Ϊ��
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else //����ļ���Ϊ��
	{
		for (int i = 0; i < this->m_EmpNum; i++)//������ò�ͬworker��
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void workerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ�����" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//����ǰ��
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//���������м�¼��Ա����
			//����ͬ����FILENAME����
			this->save();

			cout << "ɾ���ɹ�!" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���Ա��" << endl;
		}
	}

	system("pause");
	system("cls");
}

void workerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		int id;
		cout << "�������޸�ְ���ı��:" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ���ŵ�ְ��
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽:" << id << "��ְ�� ��������ְ����" << endl;
			cin >> newId;

			cout << "�������µ�����" << endl;
			cin >> newName;

			cout << "�������λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			if (dSelect == 1)
			{
				worker = new Employee(newId, newName, dSelect);
			}
			else if (dSelect == 2)
			{
				worker = new Manager(newId, newName, dSelect);
			}
			else if (dSelect == 3)
			{
				worker = new Boss(newId, newName, dSelect);
			}
			//�������ݵ������У�ָ��
			this->m_EmpArray[ret] = worker;

			//��������
			this->Sort_Emp();

			//���浽�ļ�
			this->save();
		}
		else
		{
			cout << "�޸�ʧ��,���޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ���" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.����ְ����������" << endl;

		int Select;
		cin >> Select;

		if (Select == 1)
		{
			//ѡ��ʹ��ְ����Ų���
			cout << "��������ҵ�ְ��id" << endl;
			int id;
			cin >> id;
			int rent = this->IsExist(id);
			if (rent != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ� ���ҽ��Ϊ:" << endl;
				this->m_EmpArray[rent]->showInfo();
			}
			else
			{
				cout << "����ʧ��,��������" << endl;
			}
		}
		else if (Select == 2)
		{
			//����������
			cout << "��������ҵ�ְ������" << endl;
			string name;
			cin >> name;

			bool exist = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					if (exist == false)//����ǵ�һ�εĻ� ��ʾ
					{
						cout << "���ҳɹ� ���ҽ��Ϊ:" << endl;
					}
					this->m_EmpArray[i]->showInfo();
					exist = true;
				}
			}
			if (exist == false)
			{
				cout << "����ʧ�� ���޴���" << endl;
			}
		}
		else
			cout << "ѡ������" << endl;
	}
	system("pause");
	system("cls");
}

int workerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}

void workerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�� �޷���������" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minimum = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[minimum]->m_Id > m_EmpArray[j]->m_Id)
				{
					minimum = j;
				}
			}
			//�ж�һ��ʼ�϶�����Сֵ�ǲ��Ǽ������Сֵ�����ֵ ������� ��������
			
			if (i != minimum)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minimum];
				this->m_EmpArray[minimum] = temp;
			}
		}
	}
}

void workerManager::Clean_File()
{
	cout << "ȷ�����?" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select;
	cin >> select;

	if (select == 1)
	{
		//�������ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];

				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
	}
	else if (select == 2)
	{
		//�����κβ���
	}
	else
		cout << "�������" << endl;

	system("pause");
	system("cls");
}

workerManager::~workerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}