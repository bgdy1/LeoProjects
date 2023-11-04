//�Լ�ͨ�õ�������
#pragma once
#include<iostream>
using namespace std;

template<typename T>
class MyArray
{
public:
	//�вι���
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	
	//��������
	MyArray(const MyArray<T>& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//β�巨
	void Push_Back(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//�������ĩβ��������
		this->m_Size++;//���������С
	}

	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±귽ʽ
	T operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	
	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->m_Capacity = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����
	
	int m_Capacity;//��������
	
	int m_Size;//�����С
};