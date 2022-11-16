#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 완전 제곱수를 구해보자
// 1,4, ... 64, 81, 100

// m보다 크고 n보다 작은 수들 가운데 완전 제곱수를 어떻게 구할까?
// 루트를 씌울까

int m, n;
int _min;
int sum;
int order;

int main(){
    cin >> m;
    cin >> n;

    for (int i = m; i <= n;i++){
        if(sqrt(i) == int(sqrt(i))){
            if(order==0) _min = i;
            sum += i;
            order++;
        }
    }
    if(sum==0){
        cout << -1;
        return 0;
    }
    cout << sum << endl;
    cout << _min;

    return 0;
}