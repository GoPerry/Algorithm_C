// Link_List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT_TYPE;

typedef struct LinkList
{
	ELEMENT_TYPE Data;
	 LinkList * next;
	 LinkList * prev;


}node_t;

typedef LinkList * node;

node createNode(ELEMENT_TYPE X) {

	node temp;
	printf("creating new nodes \n\n\r");
	temp = (node)malloc(sizeof(struct LinkList));
	if (temp == NULL)
	{
		printf("allocation failed !\n");
		return false;
	}
	temp->next = NULL;
	temp->prev = NULL;
	temp->Data = X;
	printf("data = %d\r\n", temp->Data);
	return temp;

}

node AddNode(node head,ELEMENT_TYPE X){

	node tempNode,p;
	int value;
	value = X;
	tempNode = createNode(X);
	if (head == NULL)
	{
		head = tempNode;
	}
	else
	{
		p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = tempNode;
	}

	return head;

}

void  traverse(node head)
{
	ELEMENT_TYPE val;
	node p;
	if (head==NULL)
	{
		printf("head is Null\n");
	}
	else
	{	
		p = head;
		do 
		{
			printf("current node data = %d\n", p->Data);
			p = p->next;
		} while (p->next != NULL);
		
		//print last node data
		//printf("current node data = %d\n", p->Data);
		
	}

	
}

void isEmpty(node head)
{

	if (head->next == NULL)
	{
		printf("List Null\n");
	}
	else
	{
		printf("List is not Null\n");
	}

}

node find_last(node head)
{
	node p;
	p = head;
	while (p->next !=NULL)
	{
		p = p->next;
		
	}
	printf("the last node data = %d\n",p->Data);
	return p;
}

int main()
{
		
	node head;
	int val,val1,val3,len,i=0;
	ELEMENT_TYPE list_data[] = {1,2,3,4,5,6,7,8};

#if 0
	val = 0;
	head = createNode(val);
	val1 = 1;
	head = AddNode(head, val1);
	val3 = 2;
	head = AddNode(head, val3);
#endif // 0
	val = 0;
	head = createNode(val);
	//len = sizeof(list_data);
	//printf("len  = %d\n", len);
	while (i < 8)
	{
		
		//scanf_s("%c", &val);
		head = AddNode(head, list_data[i]);
		i++;
	}
	

	//printf("head data = %d \n", head->Data);

	traverse(head);
	find_last(head);

	//val = (ELEMENT_TYPE)head->Data;
	
    return 0;
}

