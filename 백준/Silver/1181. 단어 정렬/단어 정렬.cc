#include <iostream>
#include <algorithm>
#include <vector>

// 비교 함수: 길이를 기준으로, 길이가 같으면 사전순 비교
bool compare(const std::string &s1, const std::string &s2)
{
    if(s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}

class Answer1181
{
public:
    Answer1181(int count)
        : count(count), words(count) {}
    ~Answer1181() { } // 빈 소멸자
    
    void test()
    {
       
        for (int i = 0; i < count; i++)
        {
            std::cin >> words[i];
        }
        
        std::sort(words.begin(), words.end(), compare);

        // 중복제거 
        auto last = std::unique(words.begin(), words.end());
        words.erase(last, words.end());
        
      
        for (const auto &s : words)
        {
            std::cout << s << "\n";
        }
    }
    
private:
    int count;
    std::vector<std::string> words;
    
};

int main()
{
    int count = 0;
    std::cin >> count;
    Answer1181 a(count);
    a.test();
    
    return 0;
}
