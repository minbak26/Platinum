#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;
    list<char> text(init.begin(), init.end());
    auto cursor = text.end();

    int q;
    cin >> q;
    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            text.insert(cursor, add);
        } else if (op == 'L') {
            if (cursor != text.begin()) cursor--;
        } else if (op == 'D') {
            if (cursor != text.end()) cursor++;
        } else { 
            if (cursor != text.begin())
                cursor = text.erase(--cursor);
        }
    }
    for (char c : text) cout << c;
}