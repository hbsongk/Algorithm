#include <iostream>
using namespace std;

int arr[104];
int dp[104][104];

void dfs(int level)
{
    for (int i = 1; i < level; i++)
    {
        dp[level][i] = dp[level - 1] dp[level][i] =
    }
}

int main()
{
    int n;
    dp[0][0] = 8;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        dfs(2);
    }

    return 0;
}