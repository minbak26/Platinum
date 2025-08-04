#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 시간을 분으로 바꾸기
int toMintue(int t)
{
    return (t / 100) * 60 + (t % 100);
}

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;

    for (int& sche : schedules)
        sche = toMintue(sche) + 10;

    for (auto& logs : timelogs)
        for (int& time : logs)
            time = toMintue(time);

    for (int i = 0; i < schedules.size(); i++)
    {
        bool ChulgunChung = true;  // 직원별 초기화

        for (int j = 0; j < 7; j++)
        {
            int day = (startday + j) % 7;  // 요일 계산

            // 주말이라면 출근 체크하지 않고 넘어감
            if (day == 6 || day == 0)
                continue;

            // 출근 시간을 지키지 못하면 플래그 변경 후 즉시 탈출
            if (schedules[i] < timelogs[i][j])
            {
                ChulgunChung = false;
                break;
            }
        }

        if (ChulgunChung)
            answer++;
    }

    return answer;
}