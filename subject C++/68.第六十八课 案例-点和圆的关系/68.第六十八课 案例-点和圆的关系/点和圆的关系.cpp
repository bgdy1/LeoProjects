#include<iostream>
using namespace std;

//����
class point
{
public:
	//����x
	void setX(int X)
	{
		m_X = X;
	}
	//����x
	int getX()
	{
		return m_X;
	}
	//����y
	void setY(int Y)
	{
		m_Y = Y;
	}
	//����y
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};

//ԭ��
class circle
{
public:
	//���ð뾶
	void setR(int r)
	{
		m_r = r;
	}
	//���ذ뾶
	int getR()
	{
		return m_r;
	}
	//����Բ��
	void setCentre(point centre)
	{
		m_centre = centre;
	}
	//����Բ��
	point getCentre()
	{
		return m_centre;
	}
	
private:
	int m_r;

	point m_centre;
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(circle* c, point* p)
{
	//��������֮������ƽ��
	int distance = 
	(c->getCentre().getX() - p->getX())* (c->getCentre().getX() - p->getX()) +
	(c->getCentre().getY() - p->getY())* (c->getCentre().getY() - p->getY());
	//����뾶��ƽ��
	int rDistance = c->getR() * c->getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "������Բ��" << endl;
	}
	else
		cout << "����Բ��" << endl;
}

int main()
{
	//����Բ
	circle c;
	c.setR(10);
	point centre;
	centre.setX(10);
	centre.setY(0);
	c.setCentre(centre);

	//������
	point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	isInCircle(&c, &p);
}