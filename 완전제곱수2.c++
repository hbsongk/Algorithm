#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int m, n;
int _min;
int sum;
int order;

int main(){
    cin >> m;
    cin >> n;

    int _start = 0;
    int _end = 0;

    if(sqrt(m) == int(sqrt(m))){
        _start = int(sqrt(m));
    }
    else{
        _start = int(sqrt(m)) + 1;
    }
    if(sqrt(n) == int(sqrt(n))){
        _end = int(sqrt(n));
    }
    else{
        _end = int(sqrt(n));
    }
    for (int i = _start; i <= _end;i++){
        if(order==0){
            _min = i*i;
        }
        sum += i * i;
        order++;
    }
        if (sum == 0)
        {
            cout << -1;
            return 0;
        }

    cout << sum << endl;
    cout << _min;

    return 0;
}