#include<iostream>
#include <vector>
using namespace std;

void DFS(int x, int y, std::vector<std::vector<int>>& graph)
{
    // 방문 처리
    graph[x][y] = 0;

    int searchX[4] = { -1, 1, 0, 0 };
    int searchY[4] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; i++)
    {
        int newX = x + searchX[i];
        int newY = y + searchY[i];

        // 범위 체크
        if (newX >= 0 && newX < graph.size() && newY >= 0 && newY < graph[0].size() && graph[newX][newY] == 1)
        {
            DFS(newX, newY, graph);
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int X, Y, spotCount;
        cin >> X >> Y >> spotCount;

        // 케이스마다 새로 초기화
        vector<vector<int>> graph(X, vector<int>(Y, 0));

        for (int i = 0; i < spotCount; i++) 
        {
            int inputX, inputY;
            cin >> inputX >> inputY;
            graph[inputX][inputY] = 1;
        }

        int jirung = 0;
        for (int x = 0; x < X; x++) 
        {
            for (int y = 0; y < Y; y++) 
            {
                if (graph[x][y] == 1) 
                {
                    jirung++;
                    DFS(x, y, graph);
                }
            }
        }
        cout << jirung << "\n";
    }
    return 0;
}



