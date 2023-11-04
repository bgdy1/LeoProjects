#include<iostream>
using namespace std;

//抽象不同零件的类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculator() = 0;
};

class graphicCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
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
		//让零件工作起来 调用接口
		m_cpu->calculator();
		m_c->display();
		m_mem->storage();
	}

	//提供析构函数来释放三个电脑零件
	~Computer()
	{
		//释放cpu
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		
		//释放显卡
		if (m_c != NULL)
		{
			delete m_c;
			m_c = NULL;
		}

		//释放内存条
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;//CPU的零件指针
	graphicCard* m_c;//显卡零件指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "intel的CPU开始计算" << endl;
	}
};

class IntelGraphicCard :public graphicCard
{
public:
	virtual void display()
	{
		cout << "intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intel的内存条开始存储了了" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "Lenovo的CPU开始计算" << endl;
	}
};

class LenovoGraphicCard :public graphicCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了了" << endl;
	}
};

void test01()
{
	cout << "第一台电脑开始工作" << endl;
	CPU* intelCpu = new IntelCPU;
	graphicCard* intelCard = new IntelGraphicCard;
	Memory* intelMem = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "-------------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//组装第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGraphicCard, new LenovoMemory);
	computer2->work();
	delete computer2;

}