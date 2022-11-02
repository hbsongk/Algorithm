#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int N = board.size();
    int num_mov = moves.size();
    stack<int> s;
    for(int i=0;i<num_mov;i++){
        int move = moves[i] - 1;
        for(int j=0;j<N;j++){
            int doll = board[j][move];
            if(doll != 0){
                // cout<<doll<<"\n";
                if(s.empty()){
                    s.push(doll);
                }
                else{
                    if(s.top() == doll){
                        s.pop();
                        answer += 2;
                        // cout<<doll<<" "<<i<<" "<<N<<"\n";
                    }
                    else{
                        s.push(doll);
                    }
                }
                board[j][move] = 0;
                break;
            }
        }
    }
    return answer;
}