#include<iostream>
using namespace std;
struct hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(struct hero harray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (harray[j].age > harray[j + 1].age)
			{
				struct hero temp = harray[j];
				harray[j] = harray[j + 1];
				harray[j + 1] = temp;
			}
		}
	}
}

void printinfo(struct hero harray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ�����ƣ�" << harray[i].name << " ���䣺" << harray[i].age << " �Ա�" << harray[i].sex << endl;
	}
}

int main()
{
	struct hero harray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(harray) / sizeof(harray[0]);
	bubblesort(harray, len);
	printinfo(harray, len);

	system("pause");
	return 0;
}