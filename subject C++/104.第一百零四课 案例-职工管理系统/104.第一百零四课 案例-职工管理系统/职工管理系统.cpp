#include<iostream>
#include"workerManager.h"
using namespace std;

int main()
{
	//ʵ���������߶���
	workerManager vm;
	int choice = 0;

	for (int i = 0; i < 1; i++)
	{
		vm.Show_Menu();
		cout << "����������ѡ��:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			vm.ExitSystem();
			break;
		case 1:
			vm.Add_Emp();
			break;
		case 2:
			vm.Show_Emp();
			break;
		case 3:
			vm.Del_Emp();
			break;
		case 4:
			vm.Mod_Emp();
			break;
		case 5:
			vm.Find_Emp();
			break;
		case 6:
			vm.Clean_File();
			break;
		default:
			system("pause");
			break;
		}
		i--;
	}

	system("pause");
	return 0;
}