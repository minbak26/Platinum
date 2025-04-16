#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    int cardNum = 0, hasCardNum = 0;

    // 입력
    std::cin >> cardNum;
    std::vector<int> card(cardNum);
    for (int i = 0; i < cardNum; i++)
    {
        std::cin >> card[i];
    }

    std::cin >> hasCardNum;
    std::vector<int> hasCard(hasCardNum);
    for (int i = 0; i < hasCardNum; i++)
    {
        std::cin >> hasCard[i];
    }

    // 빈도를 저장할 해시맵
    std::unordered_map<int, int> cardCountMap;
    for (int num : card)
    {
        cardCountMap[num]++;
    }

    // 결과 출력
    for (int num : hasCard)
    {
        std::cout << cardCountMap[num] << " ";
    }

    return 0;
}