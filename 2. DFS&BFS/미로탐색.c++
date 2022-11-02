#include <bits/stdc++.h>
using namespace std;
const int max_n = 104;
int x,y,n,m;
int dy[4] = {0, -1, 0, 1};
int dx[4] = {1, 0, -1, 0};
int arr[max_n][max_n], visited[max_n][max_n];

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    queue<pair<int, int>> q;
    q.push({0,0});
    visited[0][0] = 1;
    while(q.size()){
        tie(x,y) = q.front(); q.pop();
        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || nx<0 || nx>=n || ny>=m || arr[nx][ny] == 0) continue;
            if(visited[nx][ny]) continue;
            q.push({nx,ny});
            visited[nx][ny] = visited[x][y] + 1;
        }
    }

    cout << visited[n-1][m-1];

    return 0;
}