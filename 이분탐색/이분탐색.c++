#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,4,5,6,7,8,9};

int binary_search(int target){
    int left = 0, right=8;

    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target){
            left = mid+1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ans = binary_search(4);
    cout << ans;
}