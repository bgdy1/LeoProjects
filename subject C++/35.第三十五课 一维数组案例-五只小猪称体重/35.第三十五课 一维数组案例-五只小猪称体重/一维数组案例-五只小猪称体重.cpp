#include<iostream>
using namespace std;

int main()
{
	//1.创建五只小猪体重的数组
	int arr[] = { 300,350,200,400,250 };
	
	//2.从数组中找到最大值
	int max = 0;//先认定一个最大值为0
	
	for (int i = 0; i < 5; i++)//对数据进行更新 如果大于max的话就更新
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//3.打印最大值
	cout <<"最重的小猪体重为:"<< max << endl;

	return 0;
	system("pause");
}