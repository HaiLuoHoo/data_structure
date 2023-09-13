//2.2 ���Ա��˳���ʾ - ��̬����

using namespace std;
#include <iostream>
#define InitSize 10

struct SqList
{
	int* data;
	int maxSize;
	int length;
};

//��������������ʼ��һ��˳���
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

//����������������һ��˳���
void DestroyList(SqList& L)
{
	delete[] L.data;
	L.length = 0;
	L.maxSize = 0;
}

//�������������������
bool ListInsert(SqList& L, int i, int e)
{
	if (i<1 || i>L.length+1)
	{
		return false;
	}
	if (L.length >= L.maxSize)
	{
		return false;
	}
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

//������������ɾ������
bool ListDelete(SqList& L, int i, int& e)
{
	if (i<1 || i>L.length)
	{
		return false;
	}
	e = L.data[i - 1];
	for (int j = i; j <= L.length - 1; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.data--;
	return true;
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
	PrintList(L);
	DestroyList(L);
	return 0;
}
