#include<string>
#include <iostream>
#include<vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int resultSum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            resultSum++;
        }
        else
        {
            --resultSum;
        }

        if (resultSum < 0)
            return answer = false;
    }

    if (resultSum == 0)
    {
        answer = true;
    }
    else
        answer = false;

      return answer;
}