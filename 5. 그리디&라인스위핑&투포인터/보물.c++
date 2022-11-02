#include <bits/stdc++.h>
using namespace std;
int n,sum;
int a[54];
int b[54];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+n, greater<>());

    for(int i=0;i<n;i++){
        sum += a[i]*b[i];
    }
    
    cout << sum;

    return 0;
}