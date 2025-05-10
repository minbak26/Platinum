#include <iostream>
#include <map>
#include <string>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::map<std::string, std::string> result;
    int inputSite = 0;
    int findPassWard = 0;
    std::string site;
    std::string password; 
    std::string foundSite;

    std::cin >> inputSite >> findPassWard;

    for (int i = 0; i < inputSite; i++)
    {
        std::cin >> site >> password;
        result.insert(std::make_pair(site, password));
    }

    for (int j = 0; j < findPassWard; j++)
    {
        std::cin >> foundSite;
        auto it = result.find(foundSite);
        if (it != result.end()) {
            std::cout << it->second << "\n";  
        }
    }

    return 0;
}