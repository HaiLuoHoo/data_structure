//2.2 线性表的顺序表示 - 动态分配

using namespace std;
#include <iostream>
#define InitSize 10

struct SqList
{
	int* data;
	int maxSize;
	int length;
};

//基本操作——初始化一个顺序表
void InitList(SqList& L)
{
	L.data = new int[InitSize];
	L.maxSize = 10;
	L.length = 10;
	for (int i = 0; i < L.maxSize; i++)
	{
		L.data[i] = 0;
	}
}

void DestroyList(SqList& L)
{
	delete[] L.data;
	L.length = 0;
	L.maxSize = 0;
}

//基本操作——输出操作
void PrintList(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		cout << L.data[i] << endl;
	}
}

int main()
{
	SqList L;
	InitList(L);
	PrintList(L);
	DestroyList(L);
	return 0;
}
