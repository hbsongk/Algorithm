#include <bits/stdc++.h>
using namespace std;
int a,b,c,s,e;
int cnt[104];
int sum;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;

    for(int i=0;i<3;i++){
        cin >> s >> e;
        for(int j=s;j<e;j++){
            cnt[j]++;
        }
    }
    for(int i=1;i<100;i++){
        if(cnt[i]){
            if(cnt[i] == 1) sum += a*1;
            else if(cnt[i] == 2) sum += b*2;
            else if(cnt[i] == 3) sum += c*3;
        }
    }
    cout << sum;

    return 0;
}