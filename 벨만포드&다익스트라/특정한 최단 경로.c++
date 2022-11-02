#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N, E;
int a, b, c;
int v1, v2;
int inf=100000000;
vector<pair<int, int>> g[801];
int dist1[801];
int distv1[801];
int distv2[801];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>N>>E;
    for(int i=0;i<E;i++){
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
        g[b].push_back(make_pair(a, c));
    }
    cin >>  v1 >> v2;
    for(int i=1;i<=N;i++){
        dist1[i]=inf;
        distv1[i]=inf;
        distv2[i]=inf;
    }
    
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, 1));
    dist1
}