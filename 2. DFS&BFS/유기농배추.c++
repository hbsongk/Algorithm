#include <bits/stdc++.h>
using namespace std;
int arr[54][54];
int visited[54][54];
int t,m,n,k,x,y,ret;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    visited[x][y] = 1;
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || nx<0 || nx>=m || ny>=n) continue;
        if(visited[nx][ny] == 1 || arr[nx][ny] == 0) continue;
        dfs(nx, ny);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        ret = 0;
        cin >> m >> n >> k;
        fill(&arr[0][0], &arr[0][0]+54*54, 0);
        fill(&visited[0][0], &visited[0][0]+54*54, 0);
        for(int i=0;i<k;i++){
            cin >> x >> y;
            arr[x][y] = 1;
        }
       
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] == 1 && visited[i][j] == 0){
                    dfs(i,j);
                    ret++;
                }
            }
        }
        cout << ret << '\n';
    }
    return 0;
}