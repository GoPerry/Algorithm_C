// MGraph.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdlib.h>
#include <stdio.h>

const int MaxVertexNum = 100;
typedef int WeightType;
typedef int DataType;
//定义Matrix 图的表示形式
struct GNode
{
	int Nv;
	int Ne;
	WeightType G[MaxVertexNum][MaxVertexNum];
	DataType  Data[MaxVertexNum];

};

typedef GNode * PtrToGNode;
typedef PtrToGNode MGraph;

typedef int Vertex;

//--------定义边--------------

typedef struct ENode * PtrToENode;
struct ENode
{
	Vertex V1, V2;
	WeightType Weight;
};
typedef PtrToENode Edge;

//----------------------

MGraph CreateGraph(int VertexNum)
{
	Vertex V = 0, W = 0;
	MGraph mGraph;
	mGraph = (MGraph)malloc(sizeof(struct GNode));
	mGraph->Nv = VertexNum;
	mGraph->Ne = 0;
	for (V = 0; V < mGraph->Nv; V++)
		mGraph->G[V][W] = 0;//对矩阵中的

	return mGraph;
}

/*插入新的边，就是连接2个顶点,同时把权重赋值给*/
void InsertEdge(MGraph Graph, Edge E)
{
	Graph->G[E->V1][E->V2] = E->Weight;
	Graph->G[E->V2][E->V1] = E->Weight;// 有向图 ，2个方向都要赋值权重
}

MGraph BuildGraph()
{
	MGraph Graph;
	Edge E;
	Vertex V;
	int Nv, i;
	printf("please input Nv value:");
	scanf_s("%d", &Nv);
	Graph = CreateGraph(Nv);//set the graph with specific vertex
	scanf_s("%d", &(Graph->Ne));//get the edges
	if (Graph->Ne != 0)
	{
		E = (Edge)malloc(sizeof(struct ENode));
		for (i = 0; i < Graph->Ne; i++)
		{
			scanf_s("%d %d %d", &E->V1, &E->V2, &E->Weight);
			InsertEdge(Graph, E);
		}
	}

	for (V = 0; V < Graph->Nv; V++)
		scanf_s("%c", &(Graph->Data[V]));
	
	return Graph;
}

int main()
{
	BuildGraph();
    return 0;
}

