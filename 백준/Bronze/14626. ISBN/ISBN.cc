#include <iostream>
#include <vector>
#include <string>
int main()
{
    std::vector<int> answer(13);
    std::string input;
    std::cin >> input;
    int answerlocation = -1;
    int temp = 0;
    int asnwerNum = -1;  // 0부터 시작할 것이므로 -1로 초기화

    for (int i = 0; i < 13; i++)
    {
        if (input[i] == '*')
        {
            answerlocation = i;
            answer[i] = 0; // 일단 0으로 초기화, 나중에 대입할 숫자를 찾음
            continue;
        }
        answer[i] = input[i] - '0';

        if (i == 12)
            continue;
        else
        {
            if (i % 2 != 0)
            {
                temp += (answer[i] * 3);
            }
            else
            {
                temp += answer[i];
            }
        }
    }

    if (answerlocation == -1) // '*'가 없는 경우 처리
    {
        std::cout << "No * found in input" << std::endl;
        return 0;
    }

    // 체크기호 확인하기
    if (answerlocation % 2 == 0)
    {
        for (int j = 0; j < 10; j++)
        {
            int t = temp + j;
            if ((10 - t % 10) % 10 == answer[12])
            {
                asnwerNum = j;
                break;
            }
        }
    }
    else
    {
        for (int j = 0; j < 10; j++)
        {
            int t = temp + (3 * j);
            if ((10 - t % 10) % 10 == answer[12])
            {
                asnwerNum = j;
                break;
            }
        }
    }

    std::cout << asnwerNum << std::endl;
    return 0;
}