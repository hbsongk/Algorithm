// 기능부터 만들자

#include <iostream>

using namespace std;
int n,m;
int sum;
int blackjack;
int arr[104];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum = 0;
            for(int k=j+1;k<n;k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum <= m){
                    blackjack = max(sum, blackjack);
                }
            }
        }
    }

    cout << blackjack;
    
    /* 3장을 뽑을 수 있는 경우의 수는?
        3중 for문
        1, 2, 3 / 3, 2, 1을 다르게 본다
    */
   // m을 넘지 않으면?
    return 0;
}