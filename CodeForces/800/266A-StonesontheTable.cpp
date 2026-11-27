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

// Problem: An elephant moves 1 to 5 steps at a time; find the minimum number of steps to reach position x.
// Solution: Greedy: use steps of size 5 as much as possible, so the answer is ceil(x / 5), i.e. (x + 4) / 5.