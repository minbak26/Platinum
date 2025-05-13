#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int arrLength = arr.size();

    for (int i = 0; i < arrLength; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1]) 
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}