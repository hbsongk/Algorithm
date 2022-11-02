#include <bits/stdc++.h>
using namespace std;
int i=1;
char pre;
string _str;
string s1;
vector<string>v;
vector<int>answer;
vector<pair<int,string>>_pair;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> _str;
    // vector<int>num(500);
    int num[500] = {0,};
    for(char a : _str){
        if(a == '{'){
            pre = a;
            continue;
        }
        if(a == '}' && pre == '}'){
            continue;
        }
        if(a == ',' && pre == '}' ){
            continue;
        }
        if(a =='}' || a==','){
            pre = a;
            v.push_back(s1);
            s1="";
            continue;
        }
        pre = a;
        s1 += a;
    }
    sort(v.begin(),v.end(),greater<>());
    for(string s : v){
        int a = stoi(s);
        num[a]++;
    }
    v.erase(unique(v.begin(),v.end()),v.end());

    for(string s: v){
        int a = stoi(s);
        _pair.push_back({num[a],s});
    }
    sort(_pair.begin(),_pair.end(),greater<>());

    for(pair<int,string>p: _pair){
        int a = stoi(p.second);
        answer.push_back(a);
    }

    for(int i: answer){
        cout << i;
    }

    return 0;
}