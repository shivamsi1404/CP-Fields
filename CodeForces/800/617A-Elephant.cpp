#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int steps;

    if (x % 5 == 0)
    {
        steps = x / 5;
    }
    else
    {
        steps = (x / 5) + 1;
    }

    cout << steps << "\n";

    return 0;
}

// Problem: An elephant moves 1 to 5 steps at a time; find the minimum number of steps to reach position x.
// Solution: Greedy: use steps of size 5 as much as possible, so the answer is ceil(x / 5), i.e. (x + 4) / 5.