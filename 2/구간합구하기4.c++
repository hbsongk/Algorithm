#include <iostream>
#include <vector>
using namespace std;
int n,m;
int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    vector<long long>dp(n+1);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        dp[i] = dp[i-1] + num;
    }
    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << dp[b]-dp[a-1] << '\n';
    }

    return 0;
}

// long long이 가장 빠름
// dp 시작 1부터
// endl < '\n' 빠름

// dp는 직접 하나하나 써주자