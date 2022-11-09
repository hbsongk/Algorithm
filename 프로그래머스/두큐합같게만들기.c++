#include <string>
#include <vector>
#include <numeric>

using namespace std;
int sum;
int queue1_sum, queue2_sum;
int pop;
int answer, cnt;
int size;

int solution(vector<int> queue1, vector<int> queue2)
{
    queue1_sum = accumulate(queue1.begin(), queue1.end(), 0);
    queue2_sum = accumulate(queue2.begin(), queue2.end(), 0);
    sum = queue1_sum + queue2_sum;
    const int size = queue1.size();
    int temp = size;
    while (temp--)
    {
        if (queue1_sum == sum / 2)
            break;
        if (queue1_sum < sum / 2)
        { // 작으면
            pop = queue2[0];
            queue2.erase(queue2.begin() + 0);
            queue1.push_back(pop);
            cnt++;
            continue;
        }
        if (queue1_sum > sum / 2)
        {
            pop = queue1[0];
            queue1.erase(queue1.begin() + 0);
            queue2.push_back(pop);
            cnt++;
            continue;
        }
    }
    (cnt == 0) ? answer = -1 : answer = cnt;

    return answer;
}