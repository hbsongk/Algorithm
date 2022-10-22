#include <iostream>
using namespace std;
int n;
long long dp[90];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    // 몇번째일까? 10번째, 왜? dp[0]이 0번째니까 10번째는 dp[10]
    //왜 틀렸을까? 다른 조건이 있을까? 제일 끝 값을 넣어보자.
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];

    return 0;
}