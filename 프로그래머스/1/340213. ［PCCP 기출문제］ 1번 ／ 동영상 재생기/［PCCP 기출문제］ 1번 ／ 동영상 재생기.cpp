#include <string>
#include <vector>

#include <iostream>

using namespace std;

int ParseTimeString(string timeStr) 
{
    size_t colonPos = timeStr.find(':');
    if (colonPos != string::npos) {
        int min = stoi(timeStr.substr(0, colonPos));
        int sec = stoi(timeStr.substr(colonPos + 1));
        return min * 60 + sec;
    }
    return 0; // 에러 처리
}

string ToMin(int inputTime)
{
    if (inputTime == 0)
    {
        return "00:00";
    }
    string smin;
    string ssec;
    int min = (inputTime / 60);
    int sec = (inputTime % 60);
    if (min < 10)
    {
        smin = '0' + to_string(min);
    }
    else
        smin = to_string(min);
    if (sec < 10)
    {
        ssec = '0' + to_string(sec);
    }
    else
        ssec = to_string(sec);

    return smin + ":" + ssec;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";

    size_t sz;
    int IvideoLen = ParseTimeString(video_len);
    int Ipos = ParseTimeString(pos);
    int IopStart = ParseTimeString(op_start);
    int IopEnd = ParseTimeString(op_end);


    // 시도2 : 오프닝 먼저 체크
    if (Ipos >= IopStart && Ipos <= IopEnd)
    {
        Ipos = IopEnd;
    }

    for (int i = 0; i < commands.size(); i++)
    {
        if (commands[i] == "next")
        {
            Ipos += 10;
            if (Ipos > IvideoLen) 
            {
                Ipos = IvideoLen;
            }


        }
        else if (commands[i] == "prev")
        {
            Ipos -= 10;
            if (Ipos < 0)
            {
                // 0 이면 00:00 으로 출력하게.
                Ipos = 0;
            }
        }

        
        if (Ipos >= IopStart && Ipos <= IopEnd)
        {
            Ipos = IopEnd;
        }


    }

    answer = ToMin(Ipos);

    return answer;
}