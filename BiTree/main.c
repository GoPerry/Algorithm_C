#include <stdio.h>
#include <stdlib.h>

//https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

typedef struct  BiNode {

    int data;
    struct BiNode *Left;
    struct BiNode *Right;
}BiNode_t;

struct BiNode * newNode(int data){

    struct BiNode* node = (struct BiNode *)malloc(sizeof(struct BiNode));
    node->data=data;
    node->Left=NULL;
    node->Right=NULL;
    return node;

}





int main() {

    int val;
    printf("Input val:\n");
    scanf("%d",&val);
    struct BiNode * root_node=newNode(val);
    printf("Root Node Data = %d",root_node->data);
    root_node->Left=newNode(3);
    root_node->Right=newNode(4);
    printf("left data:%d",root_node->Left->data);
    printf("right data:%d",root_node->Right->data);


    exit(0);
}