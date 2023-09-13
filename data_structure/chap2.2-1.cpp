//2.2 线性表的顺序表示 - 静态分配

using namespace std;
#include<iostream>
#define MaxSize 10

//静态表
typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

//基本操作——初始化一个顺序表
void InitList(SqList &L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;
	}
	L.length = 0;
}

//基本操作——插入操作
bool ListInsert(SqList &L, int i, int e)
{
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

//基本操作——删除元素
bool ListDelete(SqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	for (int j = i; j <= L.length - 1; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

//基本操作——按值查询
int LocateElem(SqList L, int e)
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] == e)
			return i + 1;
	}
	return 0;
}

//基本操作——输出操作
void PrintList(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		if (i == L.length - 1)
		{
			cout << L.data[i] << endl;
		}
		else
		{
			cout << L.data[i] << " ";
		}
	}
}

int main()
{
	SqList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 1, 2);
	ListInsert(L, 1, 3);
	cout << "打印顺序表：";
	PrintList(L);
	int e;
	ListDelete(L, 3, e);
	cout << "删除第3个数据元素：" << e << endl;
	cout << "打印顺序表：";
	PrintList(L);
}
