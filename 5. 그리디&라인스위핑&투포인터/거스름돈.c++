#include <bits/stdc++.h>
using namespace std;
int n;
int res,cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    res = 1000 - n;

    while(res){
        if(res >=500){
            cnt += res / 500;
            res %= 500;
            continue;
        }
        else if(res>=100){
            cnt += res / 100;
            res %= 100;
            continue;
        }
        else if(res>=50){
            cnt += res / 50;
            res %= 50;
            continue;
        }
        else if(res>=10){
            cnt += res / 10;
            res %= 10;
            continue;
        }
        else if(res>=5){
            cnt += res / 5;
            res %= 5;
            continue;
        }
        else if(res>=1){
            cnt += res / 1;
            res %= 1;
            continue;
        }
    }
    cout << cnt;

    return 0;
}