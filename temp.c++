// 정사각형, 1 = 연결, 0 = X, 대각선: 연결로 안 침, 단지개수 출력

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int input[25][25];
int visited[25][25];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

vector<int> v;
int house;
int apartment;

void dfs(int x, int y) {
    visited[x][y] = 1;
    house++;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue;
        if (!visited[nx][ny] && input[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            scanf("%1d", &input[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (input[i][j] && !visited[i][j])
            {
                dfs(i, j);
                apartment++;
                v.push_back(house);
                house = 0;
            }
        }
    }
    sort(v.begin(), v.end());
    cout << apartment << endl;
    for (int i : v) {
        cout << i << endl;
    }
}
