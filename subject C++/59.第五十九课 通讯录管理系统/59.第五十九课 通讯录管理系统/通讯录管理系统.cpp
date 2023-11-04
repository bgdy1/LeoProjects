#include<iostream>
#include<string>
using namespace std;

#define max 2000

//设计联系人的结构体
struct person
{
	string m_name;	//名字
	int m_sex;		 //1. 男  2.女
	int m_age;		 //年龄
	string m_phone;	 //电话
	string m_address; //住址


	person()
	{
		m_sex = 0;
		m_age = 0;
	}
};

//设计通讯录的结构体
struct addressbooks
{

	//通讯录中保存的联系人数组
	struct person personArray[max];

	//通讯录中当前记录联系人个数
	int m_size;

	addressbooks()
	{
		m_size = 0;
	}
};

//1.添加联系人
void addperson(addressbooks* abs)
{
	//判断通讯录是否满了 如果满了停止添加
	if (abs->m_size == max)
	{
		cout << "通讯录已满(超过2000),无法添加" << endl;
		return;
	}
	else
	{
		//添加联系人
		//名字
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;
		//性别
		int sex = 0;
		cout << "请输入性别     1.___男	2.___女孩" << endl;
		
		//如果输入的是1或2则退出循环 如果不是 则继续循环
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "输入有误请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;
		//电话
		cout << "请输入联系电话 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_phone = phone;
		//住址
		cout << "请输入地址 " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;

		//更新通讯录人数
		abs->m_size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//2.显示联系人
void showperson(addressbooks* abs)
{
	//如果通讯录人数为0显示通讯录是空的
	if (abs->m_size == 0)
	{
		cout << "当前通讯录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名: " << abs->personArray[i].m_name << "年龄：" << abs->personArray[i].m_age << " 性别：" << (abs->personArray[i].m_sex == 1 ? " 男 " : " 女 ") << "电话号码：" << abs->personArray->m_phone << " 住址：" << abs->personArray[i].m_address << endl;
		}
	}
}

//检测联系人是否存在
int isExit(addressbooks *abs,string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//找到用户输入的姓名
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	//找不到 返回-1
	return -1;
}
//删除指定的联系人
void deletePerson(addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		//找到人，要进行删除操作
		for (int i = ret; i < abs->m_size; i++)
		{
			//数据迁移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		//更新联系人数量
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void findPerson(addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断
	int ret = isExit(abs, name);
	if (ret != -1)//找到联系人
	{
		cout << "姓名: " << abs->personArray[ret].m_name << " 年龄：" << abs->personArray[ret].m_age << " 性别：" << (abs->personArray[ret].m_sex == 1 ? " 男 " : " 女 ") << "电话号码：" << abs->personArray->m_phone << " 住址：" << abs->personArray[ret].m_address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}

//修改联系人
void modifyPerson(addressbooks* abs)
{
	cout << "请输入您要修改的联系人: " << endl;
	string name;
	cin >> name;
	int ret = isExit(abs, name);
	if (ret != -1)
	{
		//添加联系人
		//名字
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//性别
		int sex = 0;
		cout << "请输入性别     1.___男	2.___女孩" << endl;

		//如果输入的是1或2则退出循环 如果不是 则继续循环
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "输入有误请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//电话
		cout << "请输入联系电话 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//住址
		cout << "请输入地址 " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//清除联系人
void clearPerson(addressbooks* abs)
{
	cout << "请问您真的要这样做吗: 1_是  2_否" << endl;
	int whether;
	while (1)
	{
		cin >> whether;
		if (whether == 1)
		{
			abs->m_size = 0;
			cout << "联系人列表已清空" << endl;
			break;
		}
		else if (whether == 2)
		{
			cout << "已取消清空操作" << endl;
			break;
		}
		else
			cout << "输入有误 请重新输入" << endl;
	}
	system("pause");
	system("cls");
}

//菜单界面
void showmenu()
{
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}

int main()
{
	//创建一个通讯录的结构体变量
	addressbooks abs;
	//初始化通讯录中当前的人员个数
	abs.m_size = 0;
	//创建一个用户选择输入的变量
	int select = 0;
	
	//菜单的调用
	while(1)
	{
		cout << "请输入你需要的服务" << endl;
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:		//1.添加联系人
			addperson(&abs); //利用地址传递 可以修饰形参
			break;

		case 2:	//2.显示联系人
			showperson(&abs);
			break;

		case 3:	
		{
			//3.删除联系人
			deletePerson(&abs);
			break;
		}
		
		case 4:		//4.查找联系人
			findPerson(&abs);
			break;

		case 5:		//5.修改联系人
			modifyPerson(&abs);
			break;

		case 6:		//6.清空联系人
			clearPerson(&abs);
			break;

		case 0:		//0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}