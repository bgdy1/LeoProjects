#include<iostream>
using namespace std;

//点类
class point
{
public:
	//设置x
	void setX(int X)
	{
		m_X = X;
	}
	//返回x
	int getX()
	{
		return m_X;
	}
	//设置y
	void setY(int Y)
	{
		m_Y = Y;
	}
	//返回y
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};

//原类
class circle
{
public:
	//设置半径
	void setR(int r)
	{
		m_r = r;
	}
	//返回半径
	int getR()
	{
		return m_r;
	}
	//设置圆心
	void setCentre(point centre)
	{
		m_centre = centre;
	}
	//返回圆心
	point getCentre()
	{
		return m_centre;
	}
	
private:
	int m_r;

	point m_centre;
};

//判断点和圆的关系
void isInCircle(circle* c, point* p)
{
	//计算两点之间距离的平方
	int distance = 
	(c->getCentre().getX() - p->getX())* (c->getCentre().getX() - p->getX()) +
	(c->getCentre().getY() - p->getY())* (c->getCentre().getY() - p->getY());
	//计算半径的平方
	int rDistance = c->getR() * c->getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点现在圆外" << endl;
	}
	else
		cout << "点在圆内" << endl;
}

int main()
{
	//创建圆
	circle c;
	c.setR(10);
	point centre;
	centre.setX(10);
	centre.setY(0);
	c.setCentre(centre);

	//创建点
	point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(&c, &p);
}