/* 뭘 구해야 하나요? 
- 숫자가 오름차순인지 내림차순인지 판별
어떻게 판별하나요?
- arr[i]보다 arr[i+1]이 더 크거나 작기만 하면 돼요.
어떻게 할까요?
for문을 돌려서 arr[i]에 접근하고 pre 값에 집어넣을까?
point로 점수를 부여해볼까?
*/ 

/* 
ascending, descending, mixed를 어떻게 구분 할건가요?
점수를 부여해볼까요?
ascending = 8점
descending = -8점
*/

// 다른 조건은 없나요? c d e f g a b C는 각각 1~8까지
// 현 조건의 반례는 없을까요?


#include <iostream>
using namespace std;
int arr[8];
int pre;
int point;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<8;i++){
        cin >> arr[i];
    }
    pre = arr[0];
    for(int i=1;i<8;i++){
        // 만약에 pre가 arr[i]보다 크다면?
        if(pre < arr[i]){
            point += 1;
            pre = arr[i];
            continue;
        }
        if(pre > arr[i]){
            point -= 1;
            pre = arr[i];
            continue;
        }
    }
    if(point == 7) cout << "ascending";
    else if(point == -7) cout << "descending";
    else cout << "mixed";

    return 0;
}