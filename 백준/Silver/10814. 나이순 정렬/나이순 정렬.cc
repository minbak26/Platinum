#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    Solution(int age, const std::string& name)
        : age(age), name(name) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }

private:
    std::string name;
    int age;
};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int orderNum, age;
    std::string name;
    std::vector<Solution> v;

    std::cin >> orderNum;
    v.reserve(orderNum);
    for (int i = 0; i < orderNum; i++)
    {
        std::cin >> age >> name;
        v.emplace_back(age, name);
    }

    std::stable_sort(v.begin(), v.end(), [](const Solution& a, const Solution& b) {
        return a.getAge() < b.getAge();
    });

    for (const auto& person : v)
        std::cout << person.getAge() << " " << person.getName() << "\n";

    return 0;
}
