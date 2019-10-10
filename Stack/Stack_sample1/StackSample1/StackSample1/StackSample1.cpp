// StackSample1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//
// Created by Perry Yuan on 2019/9/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



#define MaxSize 200
typedef int ElementType;
typedef  int Position;

typedef  struct Stack_Node
{
	ElementType *Data;
	Position top;
	int Maxsize;
}SNode;

typedef struct Stack_Node * Stack;

bool IsFull(Stack S);
bool Push(Stack S, ElementType X);
bool IsEmpty(Stack S);

Stack Create_Stack(int maxsize)
{
	Stack S;
	S = (Stack)malloc(sizeof(struct Stack_Node));
	S->Data = (ElementType*)malloc(sizeof(ElementType)*maxsize);
	S->Maxsize = maxsize;
	S->top = -1;
	return S;
}
bool IsFull(Stack S)
{
	if (S->top == S->Maxsize - 1) {
		printf("Stack is Full\n");
	}
	else {
		printf("Stack is not Full\n");
	}
	return (S->top == S->Maxsize - 1);

}
bool Push(Stack S, ElementType X)
{
	if (IsFull(S))
		printf("Stack is Full ,failed to push new data\n\r");
	else {
		printf("adding new val to Stack\n\n\r");
		S->Data[++(S->top)] = X;
		printf("S-Data[%d]=%d \n\n", S->top, X);
		return true;
	}
}


ElementType Pop(Stack S)
{
	if (IsEmpty(S)) {
		printf("Stack is Empty!");
		return EXIT_FAILURE;
	}
	else {
		printf("Pop Data = %d", S->Data[(S->top)--]);
		return (S->Data[(S->top)--]);
	}


}

bool IsEmpty(Stack S)
{
	bool isEmpty = true;
	if (S->top == -1)
	{
		printf("Stack is Empty!\n");
		return true;
	}
	else {
		printf("Stack is not Empty!\n");
		return false;
	}
}

void main()
{
	Stack S;
	int stack_size = MaxSize;
	S = Create_Stack(stack_size);
	//IsFull(S);
	Push(S, 10);
	Push(S, 1);
	Push(S, 2);
	Push(S, 3);
	ElementType Out = Pop(S);
	printf("Pop Data = %d\n\r", Out);
	ElementType Out1 = Pop(S);
	printf("Pop Data = %d\n\r", Out);
	ElementType Out2 = Pop(S);
	printf("Pop Data = %d\n\r", Out);
}

/*
版权声明：本文为CSDN博主「Perry_yuan」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/yuzaipiaofei/article/details/101487444  
#endif 
*/
