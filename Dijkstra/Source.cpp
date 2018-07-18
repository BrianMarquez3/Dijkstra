#include"dijktra.h"

int main()
{
	int a, b, c;
	int tedges;
	memset(graph, 0, sizeof(graph));
	total = 5;
	tedges = 7;

	a = 1;
	b = 2;
	c = 10;
	graph[a][b] = c;

	a = 1;
	b = 4;
	c = 30;
	graph[a][b] = c;

	a = 1;
	b = 5;
	c = 100;
	graph[a][b] = c;

	a = 2;
	b = 3;
	c = 50;
	graph[a][b] = c;

	a = 3;
	b = 5;
	c = 10;
	graph[a][b] = c;

	a = 4;
	b = 3;
	c = 20;
	graph[a][b] = c;

	a = 4;
	b = 5;
	c = 60;
	graph[a][b] = c;

	for (int i = 1; i <= total; i++)
	{
		for (int j = 1; j <= total; j++)
			printf("%3d", graph[i][j]);
		printf("\n");
		dijktra(1);
		getPath(5);

		system("pause");
		return 0;
	}
}

