#include<iostream>
using namespace std;

class Calculator
{
public:
	virtual float getResult() = 0;

	float m_Num1;
	float m_Num2;
};

//�ӷ�

class PlusCalculator :public Calculator
{
public:
	virtual float getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//����

class MinusCalculator :public Calculator
{
public:
	virtual float getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷�

class TimesCalculator :public Calculator
{
public:
	virtual float getResult()
	{
		return m_Num1 * m_Num2;
	}
};

class OverCalculator :public Calculator
{
public:
	virtual float getResult()
	{
		return m_Num1 / m_Num2;
	}
};

int main()
{
	Calculator* c;
	while (1)
	{
		float num1;
		float num2;
		string choose;
		cout << "��������������" << endl;
		cin >> num1;
		cin >> num2;
		cout << "��������Ҫִ�е������ + - * /" << endl;
		cin >> choose;
		if (choose == "+")
		{
			c = new PlusCalculator;
			c->m_Num1 = num1;
			c->m_Num2 = num2;

			cout << c->m_Num1 << "+" << c->m_Num2 << "=" << c->getResult() << endl;
			delete c;
		}
		else if (choose == "-")
		{
			c = new MinusCalculator;
			c->m_Num1 = num1;
			c->m_Num2 = num2;

			cout << c->m_Num1 << "-" << c->m_Num2 << "=" << c->getResult() << endl;
			delete c;
		}
		else if (choose == "*")
		{
			c = new TimesCalculator;
			c->m_Num1 = num1;
			c->m_Num2 = num2;

			cout << c->m_Num1 << "��" << c->m_Num2 << "=" << c->getResult() << endl;
			delete c;
		}
		else if (choose == "/")
		{
			c = new OverCalculator;
			c->m_Num1 = num1;
			c->m_Num2 = num2;

			cout << c->m_Num1 << "��" << c->m_Num2 << "=" << c->getResult() << endl;
			delete c;
		}
		else
			cout << "������������������" << endl;

		system("pause");
		system("cls");
	}

	system("pause");
	return 0;
}