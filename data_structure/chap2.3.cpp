//2.2 ���Ա����ʽ��ʾ

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	LNode* next;
}LNode, *LinkList;

//��������������ʼ��һ��������
bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	return true;
}

//�������������������
bool ListInsert(LinkList &L, int i, int e)
{
	
}

int main()
{
	LinkList L;
	InitList(L);
}
