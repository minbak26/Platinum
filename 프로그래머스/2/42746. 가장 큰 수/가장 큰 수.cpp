#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string solution(vector<int> numbers) 
{
    string answer = "";
    vector<string> str;

    for (int i : numbers)
    {
        str.push_back(to_string(i));
    }
    sort(str.begin(), str.end(), [](string str1, string str2)
        {
            return str1 + str2 > str2 + str1;
        });

    for (string result : str)
    {
        answer += result;
    }

    // 모든 숫자가 0인 경우 처리
    if (answer[0] == '0') {
        return "0";
    }

    return answer;
}
