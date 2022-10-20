#include <iostream>
using namespace std;

int n;
int board[104][104];
long long dp[104][104];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }
    dp[0][0] = 1;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(board[row][col]==0)continue;
            if(board[row][col]!=0){
                int next_col = col + board[row][col];
                int next_row = row + board[row][col];

                if(next_row<n) dp[next_row][col] += dp[row][col];
                if(next_col<n) dp[row][next_col] += dp[row][col];
            }
        }
    }

    cout << dp[n-1][n-1];

    return 0;
}

// 왜 언제는 row고 언제는 col 뒤죽박죽일까 (헷갈려서 그랬나??)
// dp long long으로 해줘야한다.