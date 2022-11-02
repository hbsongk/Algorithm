#include <bits/stdc++.h>
using namespace std;
stack<int>s;
int cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int board[5][5] = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
    int moves[8] = {1,5,3,5,1,2,1,4};
    s.push(-1);
    for(int num : moves){
        for(int i=0;i<5;i++){
            if(board[i][num-1]){
                if(s.top()==board[i][num-1]){
                    s.pop();
                    cnt = cnt+2;
                }
                else{
                    s.push(board[i][num-1]);
                }
                board[i][num-1] = 0;
                break;
            }
        }
    }

    cout << cnt;
    return 0; 
}