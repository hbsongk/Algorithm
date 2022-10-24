#include <iostream>
using namespace std;

int n;
int arr[104];
long long dp[104][24];

long long equation(){
    dp[0][arr[0]] = 1;
    for(int level=1;level<n-1;level++){  // level
        for(int number=0;number<21;number++){
            if(dp[level-1][number]){
                if(number+arr[level]<=20) dp[level][number+arr[level]] += dp[level-1][number];
                if(number-arr[level]>=0) dp[level][number-arr[level]] += dp[level-1][number];
            }
        }
    }  
    return dp[n-2][arr[n-1]];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << equation();

    return 0;
}


// dp안에 어떤 방식으로 저장하는가
// 1단계, 2단계, 3단계 dp[][1]