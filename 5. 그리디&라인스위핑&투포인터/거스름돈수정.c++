#include <bits/stdc++.h>
using namespace std;
int n;
int coin[6] = {500,100,50,10,5,1};
int change,cnt_coin;

// 거스름돈 변수이름 change
// ctrl D 반복해서 누르면 모든변수값 가져올수 있음.
// Big O -> input의 크기의 영향 유무
// https://velog.io/@tataki26/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%ED%8F%89%EA%B0%80%EB%B2%95-2

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    change = 1000 - n;

    for(int i=0;i<6;i++){
        while(change >= coin[i]){
            cnt_coin += change/coin[i];
            change %= coin[i];
        }
    }
    cout << cnt_coin;

    return 0;
}