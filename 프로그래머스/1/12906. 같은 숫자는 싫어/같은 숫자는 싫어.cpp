#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if(!find(0, i, arr[i]))
            answer.push_back(arr[i]);
    }
    return answer;
}
