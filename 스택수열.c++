/*
조건은 뭐가 있나요?
스택에 푸시하는 순서는 반드시 오름차순을 지키도록한다
ex) 
    3
    2
    1
어떤 결과를 도출하면 되나요?
- 1이상N이하의 수를 활용하여 입력예제를 만드는 것, 스택사용 x, 배열로만 구현
*/

/*
pop하면 어디로 가게 될까?
뽑아 늘어놓게 된다.
*/

/*
어떻게 시작해야 할까요?
1~8까지 vector에 담는다.
*/

// 한가지 변수를 쓰다 막히는것 같으면?
// 변수 두개를 사용하자

// 코드를 짜는데 힘이 드는 이유?
// 각 코드들 간의 의존성을 줄여야하는데 의존하는 부분이 너무 많다.

// 코드 간의 개별성을 분류시키는 방법?
// 띄어쓰기

// 함수로 객체화 시켜서 구현하는건 어떨까요??

// 이 문제의 핵심은??

// 1,2 하고 그 다음에 5가 오게 어떻게 할수 있을까? i,j 변수를 2개 이용해서 작업한다.
// 왜 무한반복이 될까? while문의 조건이 계속 반복해서
// 최대한 통일성이 있게 코드를 짜야하는 이유? 알아보기 쉽다.

// 변수들의 관계를 알아보려면? 표를 그려서 각 변수별로 나열해본다.

// 예들을 나열하고자 할때 어떻게 해야되나요? 표를 사용해본다.

// 단순한 구조에서부터 크게 시작해봐요. 그래서 최종적으로는 반복문까지
#include <iostream>
#include <vector>
using namespace std;

int n;
int j = 1; // ? 숫자가 어느지점까지 왔는지 알려주는 고정값
int element;
int arr[100004];
string operation;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int>v;
    v.push_back(0);

    for(int i=0;i<n;i++){
        if(arr[i]<v.back()){
            cout << "NO";
            return 0;
        }
        if (arr[i] >v.back())
        {
            for(int k=j;k<=arr[i];k++){ 
                operation += '+';
                v.push_back(k);
            }
            j = arr[i]+1; //? 다음번에 vector에 들어갈 수를 저장해주는 도구
        }
        if (arr[i] == v.back())
        {
            operation += '-';
            v.pop_back();
        }
    }
    // s.top이 없어지면?
    for(char c : operation){
        cout << c << endl;
    }
}

// 왜 5가 나올까?
// for문안의 변수값들을 다르게 안해놔서
// 헷갈릴때? 최대한 고정된 값들을 만들어라

// if문 사이에서 관계 정의하기 어려울때? 예) if if elseif?
// if문 간의 순서를 바꾸어본다.



// if문 세개 적절한가?
/*
작고, 같을때?
작고, 클때

크고, 작을때 
크고, 같을때 O

같고, 작을때
같고, 클때

*/

// 뭐부터 시작해야할지 모를때 어떻게 해야할까?
// 고정된 값부터 하나하나 해결해 나가자

// if문과 for문 사이의 관계를 어떻게 명확하게 정의해야하나?



// 언제 j는 j+1을 쓰나요? 변수의 초기값이 -1일때

// while(arr[i]>=j+1 과 arr[i]>j 의 차이?)
// 시작을 0으로 할지 -1로 할지 그 차이인것 같음. 코딩의 구조에 따라 설정한 것.

// 아직 미완성된 부분은 어떻게 해야하지?
// "//"" 표시를 한다

// 여기서 for문 대신 굳이 while문을 쓰는 이유는 뭐지?
// for문은 static한 범위 안에서 반복문을 행할때 효과적이고, while문은 동적인 범위 안에서 반복문을 행할때 효과적이기 때문이다.

// 생각해볼 전제조건은 뭐가 있을까요?

// 입력값이 들어올때마다 구현을 해볼까요?
