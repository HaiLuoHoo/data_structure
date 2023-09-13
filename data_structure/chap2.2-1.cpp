//2.2 ���Ա��˳���ʾ - ��̬����

using namespace std;
#include<iostream>
#define MaxSize 10

//��̬��
typedef struct
{
	int data[MaxSize];
	int length;
}SqList;

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
	for (int j = i; j <= L.length - 1; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

//��������������ֵ��ѯ
int LocateElem(SqList L, int e)
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] == e)
			return i + 1;
	}
	return 0;
}

//�������������������
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
	cout << "��ӡ˳���";
	PrintList(L);
	int e;
	ListDelete(L, 3, e);
	cout << "ɾ����3������Ԫ�أ�" << e << endl;
	cout << "��ӡ˳���";
	PrintList(L);
}
