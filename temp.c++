#include <iostream>
using namespace std;
int n;
string dp[10004];

int main(){
    // 아스키 코드는 몇부터 몇까지 있는가? '0'~'9'까지
    // 'a'-'3'은 어떤 의미를 갖는가? a의 아스키코드 97 - '3'의 아스키코드 51
    // 'a'-3은 어떤 의미를 갖는가? a의 아스키코드 97 - 3
    // 'a'+'b'는 어떤 의미를 갖는가? a의 아스키코드 97 + b의 아스키코드 96

    // 문자끼리의 연산이 나오면? 아스키 코드를 사용하겠구나
    // String끼리의 연산을 하고 싶으면? 변수 하나에 타입을 지정해줘야한다.

    string str = "a";
    cout << str +"b";
    return 0;
}
