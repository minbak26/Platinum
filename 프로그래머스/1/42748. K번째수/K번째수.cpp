#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    

    for (int i = 0; i < commands.size(); i++)
    {
        int startIndex = commands[i][0]-1;
        int endIndex = commands[i][1]-1;


        vector<int> array2(array.begin() + startIndex, array.begin() + endIndex + 1);
        sort(array2.begin(), array2.end());
        
        answer.push_back(array2[commands[i][2] -1]);
    }
    return answer;
}