#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<queue>
#include <string.h>
#include<time.h>
using namespace std;
#define MAXVER 100  //��󶥵���
#define maxNum 100 //�����ڽӾ������󶨵���
//����ͼ�洢�ṹ
typedef struct {
	int vexs[MAXVER];  //�����
	int arc[MAXVER][MAXVER];  //�ڽӾ��󣬱߱�
	int numVertexes, numEdges; //ͼ�е�ǰ�������ͱ���
}MGraph;
extern MGraph CreateMGraph(MGraph G);
extern void bfs(MGraph G, int i, int v[maxNum]);
extern void BFS(MGraph G, int node[maxNum]);
extern void Degree(MGraph g, int node[maxNum]);

#endif // MAIN_H_INCLUDED
