// cout하고 endl이 없으면 마지막에 출력이 되는 이유?

#include <iostream>
#include <stack>
using namespace std;
int n;
stack<int>s;

void push(int num){
    s.push(num);
}
void pop(){
    if(!s.size()) cout << -1 << endl;
    else{
        int top = s.top();
        s.pop();
        cout << top << endl;
    }
}
void size(){
    cout << s.size() << endl;
}
void empty(){
    cout << (s.size()? 0:1) << endl;
}
void top(){
    if(!s.size()) cout << -1 << endl;
    else{
        cout << s.top() << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int num;
    string str;
    while(n--){
        cin >> str;
        if(str == "push"){
            cin >> num;
            push(num);
        }
        else if(str == "pop"){
            pop();
        }
        else if (str == "size")
        {
            size();
        }
        else if (str == "empty")
        {
            empty();
        }
        else if (str == "top")
        {
            top();
        }
    }
}

//  push 4일때는 어떻게 하지?
//  어차피 cin이나 scanf는 띄어쓰기 전까지 한 단어로 받아온다

// string s를 쓰지 않고 받아오는법
// char s[100];
// 명확하게 분리를 시키지 않으면?
// 어디서 에러가 났는지 모른다

// push 1
// 아직 enter가 안난 상황이기 때문에 '\n'를 해줄 필요가 없다.
// buffer 안에 있는 push를 지워버리기 때문에 정상적으로 작동이 되지 않는다.

// 중간에 멈추고 끝까지 출력이 안되는 이유?
// 할당되지 않은 값과 비교가 되기 때문

// stack? 1:0 처럼 줄임문장을 사용할때 문제가 발생하면 어떡하죠?
// (stack? 1:0)처럼 괄호를 씌워준다.