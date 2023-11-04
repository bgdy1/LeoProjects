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
		cout << "Ó¢ĞÛÃû³Æ£º" << harray[i].name << " ÄêÁä£º" << harray[i].age << " ĞÔ±ğ£º" << harray[i].sex << endl;
	}
}

int main()
{
	struct hero harray[5] =
	{
		{"Áõ±¸",23,"ÄĞ"},
		{"¹ØÓğ",22,"ÄĞ"},
		{"ÕÅ·É",20,"ÄĞ"},
		{"ÕÔÔÆ",21,"ÄĞ"},
		{"õõ²õ",19,"Å®"}
	};
	int len = sizeof(harray) / sizeof(harray[0]);
	bubblesort(harray, len);
	printinfo(harray, len);

	system("pause");
	return 0;
}