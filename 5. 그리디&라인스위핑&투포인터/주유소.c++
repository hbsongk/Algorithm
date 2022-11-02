#include <bits/stdc++.h>
using namespace std;

long n,res,_min = 987654321;
long oil[100004];
long dist[100004];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for(long i=0;i<n-1;i++){
        cin >> dist[i];
    }
    for(long i=0;i<n;i++){
        cin >> oil[i];
    }

    res = oil[0]*dist[0];
    _min = oil[0];
    for(long i=1;i<n-1;i++){
        if(_min > oil[i]){
            _min = oil[i];
        }
        res += _min*dist[i];
    }

    cout << res;

    return 0;
}