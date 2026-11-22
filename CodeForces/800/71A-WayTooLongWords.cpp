#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }

    return 0;
}   

// Problem: Abbreviate words longer than 10 chars as first letter + count of middle letters + last letter.
// Solution: If s.size() > 10, print s[0], s.size() - 2, s.back(); otherwise print the word unchanged.