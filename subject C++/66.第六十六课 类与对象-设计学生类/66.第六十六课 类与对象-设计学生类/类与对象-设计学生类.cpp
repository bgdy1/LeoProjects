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
		cout << "����:" << m_name << "ѧ��:" << m_id << endl;
	}
private:
	string m_name;
	int m_id;
};

int main()
{
	Student s1;
	s1.setInfo("����",1);
	s1.showStudent();

	system("pause");
	return 0;
}