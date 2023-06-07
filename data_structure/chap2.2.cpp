//2.2 ���Ա��˳���ʾ

#include <stdio.h>
#define MaxSize 10

//��̬��
typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

//��̬��
typedef struct
{
	int* data;
	int maxSize;
	int length;
}SqList2;

//��������������ʼ��һ��˳���
void InitList(SqList &L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L.data[i] = 0;
	}
	L.length = 0;
}

//�������������������
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

//������������ɾ��Ԫ��
bool ListDelete(SqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	for (int j = i; j <= L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

//�������������������
void PrintList(SqList L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%d ", L.data[i]);
	}
}

int main()
{
	SqList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 1, 2);
	int e;
	ListDelete(L, 1, e);
	printf("%d\n", e);
	PrintList(L);
}
