#include<iostream>
using namespace std;

class Student
{
public:
	void setInfo(string name,int id)
	{
		m_name = name;
		m_id = id;
	}
	void showStudent()
	{
		cout << "名字:" << m_name << "学号:" << m_id << endl;
	}
private:
	string m_name;
	int m_id;
};

int main()
{
	Student s1;
	s1.setInfo("张三",1);
	s1.showStudent();

	system("pause");
	return 0;
}