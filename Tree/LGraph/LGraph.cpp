// LGraph.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
 
static int MaxVertexNum = 100;
typedef int WeightType, DataType;
struct GNode
{
	int Nv;//顶点
	int Ne;//边
	AdjList G;//用邻接表表示图结构,
};
typedef struct GNode * PtrToNode;
typedef PtrToNode LGraph;// 以邻接表的方式存储的图类型


typedef int Vertex;/*用顶点下标表示顶点，为int 型*/
//-----------------------------------------------------------------------

struct AdjVNode {// 邻接表的定义
	Vertex AdjV;//邻接表下标
	WeightType Weight;//边权重
	PtrToAdjVNode Next;
};
typedef struct AdjVNode * PtrToAdjVNode;
//-----------------------------------------------------------------------

typedef struct Vnode
{
	PtrToAdjVNode FirstEdge;
	DataType Data;
}AdjList[MaxVertexNum]; //邻接表类型，在GNode 里面会定义一个数组



int create_LGraphi(int VertexNum)
{
	LGraph lgraph;
	Vertex V，W;
	lgraph = (LGraph)malloc(sizeof(struct GNode));
	lgraph->Ne = 0;
	lgraph->Nv = VertexNum;
	for (V=0; V < lgraph->Nv; V++)
	{
		lgraph->G[V].FirstEdge = NULL;

	}
	return lgraph;
}

int main()
{
    return 0;
}