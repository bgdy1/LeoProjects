#include<iostream>
using namespace std;

//����ͬ�������
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculator() = 0;
};

class graphicCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, graphicCard* c, Memory* mem)
	{
		m_cpu = cpu;
		m_c = c;
		m_mem = mem;
	}

	void work()
	{
		//������������� ���ýӿ�
		m_cpu->calculator();
		m_c->display();
		m_mem->storage();
	}

	//�ṩ�����������ͷ������������
	~Computer()
	{
		//�ͷ�cpu
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		
		//�ͷ��Կ�
		if (m_c != NULL)
		{
			delete m_c;
			m_c = NULL;
		}

		//�ͷ��ڴ���
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;//CPU�����ָ��
	graphicCard* m_c;//�Կ����ָ��
	Memory* m_mem;//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "intel��CPU��ʼ����" << endl;
	}
};

class IntelGraphicCard :public graphicCard
{
public:
	virtual void display()
	{
		cout << "intel���Կ���ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intel���ڴ�����ʼ�洢����" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};

class LenovoGraphicCard :public graphicCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢����" << endl;
	}
};

void test01()
{
	cout << "��һ̨���Կ�ʼ����" << endl;
	CPU* intelCpu = new IntelCPU;
	graphicCard* intelCard = new IntelGraphicCard;
	Memory* intelMem = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "-------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//��װ�ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGraphicCard, new LenovoMemory);
	computer2->work();
	delete computer2;

}