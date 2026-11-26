#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int size = 0;

    int count = 0;

    while (size < n - 1)
    {
        char a = s[size];
        char b = s[size + 1];

        if (a == b)
        {
            count++;
        }

        size++;
    }

    cout << count << "\n";

    return 0;
}