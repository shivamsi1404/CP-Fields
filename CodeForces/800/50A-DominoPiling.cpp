#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;

    cin >> m >> n;

    int ans;

    ans = (m * n) / 2;

    cout << ans << "\n";

    return 0;
}

// 50A - Domino Piling: Given an M x N board, find the max number of 2x1 dominoes that fit without overlapping.
// Solution: Each domino covers 2 squares, so the answer is floor(M*N / 2) via integer division, no simulation needed.