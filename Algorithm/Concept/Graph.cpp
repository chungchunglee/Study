#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m; // ������ ������ ���� �Է�
	/
	int** graph = new int* [n];
	for (int i = 0; i <= n; i++)
		graph[i] = new int[m];

	vector<vector<int>> graph_vc(n + 1, vector<int>(n + 1, -1));
}