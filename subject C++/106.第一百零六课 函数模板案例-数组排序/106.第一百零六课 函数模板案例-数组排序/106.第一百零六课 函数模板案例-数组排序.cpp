#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char数组,int数组

//排序算法
template<typename T> void mySwap(T &a ,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T> void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] > arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template<typename T> void print(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArray[] = "badcfe";
	int len = sizeof(charArray) / sizeof(char);

	mySort(charArray, len);
	print(charArray, len);
}

void test02()
{
	int intArray[] = {2,7,4,6,9,1,3,5,8};
	int len = sizeof(intArray) / sizeof(int);

	mySort(intArray, len);
	print(intArray, len);
}

int main()
{
	test01(); 
	test02();
}