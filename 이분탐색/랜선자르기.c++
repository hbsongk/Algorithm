#include <bits/stdc++.h>
using namespace std;
long long k, n;
long long length[10001];
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k >> n;
    long long left = 1;
    long long right = -1;
    long long mid, ans;
    for(ll i=0;i<k;i++){
        cin >> length[i];
        if(right < length[i]){
            right = length[i];
        }
    }

    
    while(left<=right){
        ll mid = (left + right) / 2;
        long long made = 0;
        for(ll i=0;i<k;i++){
            made += (length[i] / mid);
        }
        if(made>=n){
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        } 
    }

    cout << ans;

    return 0;
}