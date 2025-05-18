#include <iostream>
#include <queue>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;

// DFS 재귀로 구현
void DFS(int v)
{
	visited[v] = true;
	for (int neighbor : graph[v])
	{
		if (!visited[neighbor])
		{
			DFS(neighbor);
		}
	}
}

// BFS 구현
void BFS(int start)
{
	std::queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int v = q.front();
		q.pop();

		for (int neighbor : graph[v])
		{
			if (!visited[neighbor])
			{
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}



	}
}
int main() {
    int n, m;
    std::cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    // 간선 입력 (양방향)
    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 탐색 실행 (DFS 또는 BFS 선택)
    //DFS(1);
	BFS(1);

    // 감염된 컴퓨터 수 계산 (1번 제외)
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (visited[i]) count++;
    }

    std::cout << count << std::endl;
    return 0;
}