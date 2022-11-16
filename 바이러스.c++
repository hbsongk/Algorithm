#include <iostream>
using namespace std;
int n;
int numberOfLinkedComputers;
int numberOfInfestedComputers;
int input[100][100];
int visited[100][100];
int first, second;
int cnt = -1;

void dfs(int x, int y){
    cnt++;
    visited[x][y] = 1;
    for (int i = 1; i <= n;i++){
        if(input[y][i]&&!visited[y][i]){
            dfs(y, i);
        }
    }
}

int main(){
    cin >> n;
    cin >> numberOfLinkedComputers;

    for (int i = 0; i < numberOfLinkedComputers;i++){
        cin >> first >> second;
        input[first][second] = 1;
    }
    int trial = 0;
    for (int j = 1; j <= n; j++){
        if (input[1][j] && !visited[1][j]){
            dfs(1, j);
        }
    }
    cout << cnt;

    return 0;
}

// 런타임 에러? 범위문제가 크다.
// !visited[x][y]
// 풀어서 써보자.
// 1 2 -> 1 3이 됐을때 더해주냐 안 더해주냐의 차이
// 이 경우는 1,2,3,4,5 컴퓨터를 dfs의 level로 잡고, visited는 1번부터 각 레벨이 연결이 되었느냐를 확인한다.