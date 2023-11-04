#include "workerManager.h"

//构造函数
workerManager::workerManager()
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //读文件

	if (!ifs.is_open())
	{
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化指针 防止内存泄漏
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	
	//2.文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化指针 防止内存泄漏
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//3.文件存在 并且记录数据
	this->m_EmpNum = this->get_EmpNum();
	//开辟空间初始化成员变量 m_EmpArray
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件内的东西储存进 m_EmpArray内
	this->intt_Emp();
}

//显示菜单
void workerManager::Show_Menu()
{
	cout << "*********************************" << endl;
	cout << "*******欢迎使用职工管理系统!*******" << endl;
	cout << "********* 0.退出管理程序 *********" << endl;
	cout << "********* 1.增加职工信息 *********" << endl;
	cout << "********* 2.显示职工信息 *********" << endl;
	cout << "********* 3.删除离职职工 *********" << endl;
	cout << "********* 4.修改职工信息 *********" << endl;
	cout << "********* 5.查找职工信息 *********" << endl;
	cout << "********* 6.清空所有文档 *********" << endl;
	cout << endl;
}

//退出系统
void workerManager::ExitSystem()
{
	cout << "欢迎下次再使用" << endl;
	system("pause");
	exit(0);
}

void workerManager::Add_Emp()
{
	cout << "请输入增加职工数量: " << endl;

	int addNum = 0;//保存增加用户的数量

	cin >> addNum;

	if (addNum > 0)
	{
		//增加

		//计算添加新空间大小
		int newSize = this->m_EmpNum + addNum; //新空间大小 = 原来记录人数 + 新增人数

		//开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原来的空间拷贝到新的空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量增加新的数据
		for (int i = 0; i < addNum; i++)
		{
			cout << "请输入第 " << i + 1 << " 个新职工编号: " << endl;
			int id;
			cin >> id;

			if (this->IsExist(id) != -1)//查找id是否存在 如果存在提示用户
			{
				cout << "职工编号已经存在" << endl;
				break;
			}

			cout << "请输入第 " << i + 1 << " 个新职工名字" << endl;
			string name;
			cin >> name;

			cout << "请选择职工岗位:" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.总裁" << endl;
			int dSelect;
			cin >> dSelect;

			Worker* worker = NULL;//初始化防止内存泄漏
			
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
			//将创建的员工保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		delete[] this->m_EmpArray;

		//改变指针指向
		m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		this->Sort_Emp();

		//保存数据到FILENAME
		this->save();

		//文件不为空
		m_FileIsEmpty = false;

		//提示增加成功
		cout << "增加成功 " << addNum << "名新职工" << endl;
	}
	else
		cout << "输入错误" << endl;
	
	system("pause");
	system("cls");
}

void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//使用输出的方式打开文件 -- 写文件
	//将每一个人的文件写入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//关闭文件
	ofs.close();
}

int workerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件 读

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
		if (dId == 1)//普通职工
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
	if (this->m_FileIsEmpty)//如果文件为空
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else //如果文件不为空
	{
		for (int i = 0; i < this->m_EmpNum; i++)//逐个调用不同worker的
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
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
		//按照职工编号删除
		cout << "请输入想要删除的职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//数据前移
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//更新数组中记录人员个数
			//数据同步到FILENAME里面
			this->save();

			cout << "删除成功!" << endl;
		}
		else
		{
			cout << "删除失败，未找到此员工" << endl;
		}
	}

	system("pause");
	system("cls");
}

void workerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		int id;
		cout << "请输入修改职工的编号:" << endl;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找到编号的职工
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到:" << id << "号职工 请输入新职工号" << endl;
			cin >> newId;

			cout << "请输入新的姓名" << endl;
			cin >> newName;

			cout << "请输入岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			//更改数据到数组中（指向）
			this->m_EmpArray[ret] = worker;

			//重新排序
			this->Sort_Emp();

			//保存到文件
			this->save();
		}
		else
		{
			cout << "修改失败,查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找的方法" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按照职工姓名查找" << endl;

		int Select;
		cin >> Select;

		if (Select == 1)
		{
			//选择使用职工编号查人
			cout << "请输入查找的职工id" << endl;
			int id;
			cin >> id;
			int rent = this->IsExist(id);
			if (rent != -1)
			{
				//找到职工
				cout << "查找成功 查找结果为:" << endl;
				this->m_EmpArray[rent]->showInfo();
			}
			else
			{
				cout << "查找失败,姓名有误" << endl;
			}
		}
		else if (Select == 2)
		{
			//按姓名查人
			cout << "请输入查找的职工姓名" << endl;
			string name;
			cin >> name;

			bool exist = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					if (exist == false)//如果是第一次的话 显示
					{
						cout << "查找成功 查找结果为:" << endl;
					}
					this->m_EmpArray[i]->showInfo();
					exist = true;
				}
			}
			if (exist == false)
			{
				cout << "查找失败 查无此人" << endl;
			}
		}
		else
			cout << "选择有误" << endl;
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
			//找到职工
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
		cout << "文件不存在或记录为空 无法进行排序" << endl;
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
			//判断一开始认定的最小值是不是计算的最小值或最大值 如果不是 交换数据
			
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
	cout << "确认清空?" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select;
	cin >> select;

	if (select == 1)
	{
		//如果存在删除文件并重新创建
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
		//不做任何操作
	}
	else
		cout << "输入错误" << endl;

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