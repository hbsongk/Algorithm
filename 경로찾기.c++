#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int input[101][101];
bool visited[101][101];
int n;
 
void DFS(int top,int x,int y){
    cout << top << y << endl;
    input[가장 윗열][y좌표] = 1;
    visited[가장 윗열][y좌표] = true;
    for(int i=1; i<=n; i++){
        if(!visited[가장윗열][i] && input[y][i])
            DFS(top,y,i);
    }
}
 
int main(){
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&input[i][j]);
 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           if(!visited[i][i] && input[i][j]){
                 DFS(가장 윗열,x좌표,y좌표);
           }
           cout << endl;
        }
    }
 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            printf("%d ",input[i][j]);
        printf("\n");
    }
 
}
