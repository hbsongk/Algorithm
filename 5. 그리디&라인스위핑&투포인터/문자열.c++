#include <bits/stdc++.h>
using namespace std;
string s,t,ret;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    cin >> t;
    for(char a: s){
        ret += a;
        if(ret.size() >= t.size() && ret.substr(ret.size()-t.size(),t.size()) == t) ret.erase(ret.size()-t.size(),t.size());
    }

    if(ret.size()) cout << ret;
    else cout << "FRULA";

    return 0;
}