#include<iostream>
#include<ctime>
using namespace std;

struct student
{
	string sname;
	int score;
};

struct teacher
{
	string tname;
	struct student sarray[5];
};

void locatespace(struct teacher tarray[], int len)
{
	string seed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tarray[i].tname = "teacher_";
		tarray[i].tname += seed[i];
		for (int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].sname = "student_";
			tarray[i].sarray[j].sname += seed[j];
			int random = rand() % 61 + 40;//40~100
			tarray[i].sarray[j].score = random;
		}
	}
}

void printinfo(struct teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << endl;
		cout << "老师名称：" << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生名称：" << tarray[i].sarray[j].sname << endl;
			cout << "学生分数：" << tarray[i].sarray[j].score << endl;
		}
		cout << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	struct teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	locatespace(tarray, len);
	printinfo(tarray, len);
}