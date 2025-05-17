#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <cctype>

void solution()
{
    int inputPocket, findPocket;
    std::cin >> inputPocket >> findPocket;
    
    std::unordered_map<std::string, int> nameToNum;
    std::vector<std::string> numToName;
    
    for (int i = 0; i < inputPocket; ++i)
    {
        std::string name;
        std::cin >> name;
        nameToNum[name] = i + 1; 
        numToName.push_back(name);
    }
    
    for (int j = 0; j < findPocket; ++j)
    {
        std::string query;
        std::cin >> query;
        if (isdigit(query[0]))
        {
            int num = stoi(query);
            std::cout << numToName[num - 1] << '\n'; 
        }
        else
        {
            std::cout << nameToNum[query] << '\n';
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solution();
    return 0;
}