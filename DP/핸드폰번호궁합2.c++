// ASCII CODE와 %10 활용
// 재귀적으로 구현, vector안의 내용물을 가지고 재귀적으로 구현
// https://wonsang98.tistory.com/95
// 초기벡터를 만들어놓고 거기서부터 생각하자.
// i=1부터인 이유, 그래야 쓰레기 값이 안담김.
// vector<int>v(5,0)이면 v.size()가 5이다.
// vector<int>v를 지역변수에 넣으면 그 자체로 초기화가 된다.

#include <bits/stdc++.h>
using namespace std;
int phone_A[8];
int phone_B[8];
vector<int>v;

void calculator(vector<int> v){
    if(v.size()==2){
        cout << v[0] << v[1];
        return;
    }
    vector<int>v2;
    for(int i=1;i<v.size();i++){
        v2.push_back((v[i-1]+v[i])%10);
    }
    calculator(v2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<8;i++){
        scanf("%1d", &phone_A[i]);
    }
    for(int i=0;i<8;i++){
        scanf("%1d", &phone_B[i]);
    }
    for(int i=0;i<8;i++){
        v.push_back(phone_A[i]);
        v.push_back(phone_B[i]);
    }

    calculator(v);

    return 0;
}



