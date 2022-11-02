#include <bits/stdc++.h>
using namespace std;

// stoi -> string to int
// to_string -> int to string
// %[123] [1-3] %[a-z] %[^\n]
// %1d
// _str.substr(시작 위치, 길이)
// 아스키코드, 문자를 숫자형태로 저장하기 위함. 문자끼리 연산할때 뒷면에 번호가 쓰여져있다고 생각하면 됨.

int a[8];
int b[8];
vector<int>v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<8;i++){
        scanf("%1d",&a[i]);
    }
    for(int i=0;i<8;i++){
        scanf("%1d",&b[i]);
    }

    for(int i=0;i<8;i++){
        if(i==7){
            string s = to_string(a[i]+b[i]);
            string ss = s.substr(s.length()-1,1);
            v.push_back(stoi(ss));
            break;
        }
        string s = to_string(a[i]+b[i]);
        string s1 = to_string(b[i]+a[i+1]);
        string ss = s.substr(s.length()-1,1);
        string s1s1 = s1.substr(s1.length()-1,1);
        v.push_back(stoi(ss));
        v.push_back(stoi(s1s1));
    }

    for(int i : v){
        cout << i;
    }

    return 0;
}