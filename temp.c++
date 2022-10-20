#include <iostream>
#include <vector>
using namespace std;

int n;
int board[104][104];

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
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1));
    fill(dp.begin(),dp.end(),vector<long long>(n+1,0));
    dp[0][0] = 1;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(board[row][col]==0) continue;
            if(board[row][col]!=0){
                int next_row = row + board[row][col];
                int next_col = col + board[row][col];

                if(next_row<n) dp[next_row][col] += dp[row][col];
                if(next_col<n) dp[row][next_col] += dp[row][col];
            }
        }
    }

    cout << dp[n-1][n-1];

    return 0;
}