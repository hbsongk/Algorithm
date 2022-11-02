#include <bits/stdc++.h>
using namespace std;
int n,m,mx;
char arr[54][54];
int visited[54][54];
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {1, 0, -1, 0};

queue<pair<int, int>> q;

void bfs(int x, int y){
    memset(visited, 0, sizeof(visited));
    q.push({x,y});
    visited[x][y] = 1;
    while(q.size()){
        tie(x,y) = q.front();q.pop();
        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(nx<0 || ny<0 || nx>=n || ny>=m || arr[nx][ny] == 'W') continue;
            if(visited[nx][ny]) continue;
            q.push({nx,ny});
            visited[nx][ny] = visited[x][y] + 1;
            mx = max(mx, visited[nx][ny]);
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 'L'){
                bfs(i,j);
            }
        }
    }

    cout << mx-1;

    return 0;
}