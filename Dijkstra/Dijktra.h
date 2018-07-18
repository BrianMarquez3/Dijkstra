
#ifndef DIJKTRA_H
#define DIJKTRA_H

#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

#define MAXINT 999
#define MAX 100

int graph[MAX][MAX];
int total;
int distances[MAX];
int father[MAX];
bool visit[MAX];

void dijktra(int start)
{
	priority_queue<pair<int, int>> queue;
	pair <int, int > nodotmp;
	int i, j;
	for (i = 1; i <= total; i++)
	{
		distances[i] = MAXINT;
		father[i] = -1;
		visit[i] = false;
	}
	distances[start] = 0;
	queue.push(pair<int, int>(distances[start], start));
	while (!queue.empty())
	{
		nodotmp = queue.top();
		queue.pop();
		i = nodotmp.second;
		if (!visit[i]) {
			visit[i] = true;
			for (j = 1; j <= total; j++)
				if (!visit[j] && graph[i][j] > 0 && distances[i] + graph[i][j] < distances[j]) {
					distances[j] = distances[i] + graph[i][j];
					father[j] = i;
					queue.push(pair<int, int>(-distances[j], j));
				}
		}
	}
}

void getPath(int end) {
	cout << end << "";
	while (father[end] != -1) {
		cout << father[end] << ";" << end << "->" << graph[father[end]][end] << "\t";
		end = father[end];
	}
	cout << endl;
}

#endif