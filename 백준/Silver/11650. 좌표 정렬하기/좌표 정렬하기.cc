#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> resultVec;
    int countNum = 0;
    std::cin >> countNum;
    
    int x = 0, y = 0;
    for (int i = 0; i < countNum; i++) {
        std::cin >> x >> y;
        resultVec.push_back(std::make_pair(x, y));
    }
    
    std::sort(resultVec.begin(), resultVec.end());
    
    for (const auto& pair : resultVec) {
        std::cout << pair.first << " " << pair.second << "\n";
    }
    
    return 0;
}