#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    unordered_set<string> seen_names;
    vector<string> duplicates;
    

    for (int i = 0; i < N; i++)
     {
        string name;
        cin >> name;
        seen_names.insert(name);
    }
    

    for (int i = 0; i < M; i++)
     {
        string name;
        cin >> name;
        if (seen_names.count(name))
         {
            duplicates.push_back(name);
        }
    }
    
 
    sort(duplicates.begin(), duplicates.end());
    

    cout << duplicates.size() << endl;
    for (const auto& name : duplicates)
    {
        cout << name << endl;
    }
    
    return 0;
}