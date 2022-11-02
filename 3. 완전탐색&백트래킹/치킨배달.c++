#include <bits/stdc++.h>
using namespace std;
int n, m, arr[54][54], result = 987654321;
vector<vector<int>>chickenList;
vector<pair<int, int>> _home, chicken;
vector<int> v;

void combi(int start){
    if(v.size()==m){
        chickenList.push_back(v);
        return;
    }
    for(int i=start;i<chicken.size();i++){
        v.push_back(i);
        combi(i+1);
        v.pop_back();
    }
    return;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)_home.push_back({i, j});
            if(arr[i][j] == 2)chicken.push_back({i, j});
        }
    }
    combi(0);
    for(vector<int> cList : chickenList){
        int ret = 0;
        for(pair<int ,int> home : _home){
            int _min = 987654321;
            for( int _v  : cList){
                int dist = abs(home.first - chicken[_v].first) + abs(home.second - chicken[_v].second);
                _min = min(_min, dist);
            }
            ret += _min;
        }
        result = min(ret, result);
    }

    cout << result;

    return 0;
}