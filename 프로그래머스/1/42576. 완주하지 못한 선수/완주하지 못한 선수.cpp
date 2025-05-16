#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> result;

    for (const auto& name : participant) {
        result[name]++;
    }

    for (const auto& name : completion) {
        result[name]--;
    }

    for (const auto& pair : result) {
        if (pair.second > 0) {
            return pair.first;
        }
    }

    return ""; 
}