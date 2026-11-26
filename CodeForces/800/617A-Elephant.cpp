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

