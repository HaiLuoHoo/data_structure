//2.2 线性表的链式表示

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	LNode* next;
}LNode, *LinkList;

//基本操作——初始化一个单链表
bool InitList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	return true;
}

//基本操作——插入操作
bool ListInsert(LinkList &L, int i, int e)
{
	
}

int main()
{
	LinkList L;
	InitList(L);
}
