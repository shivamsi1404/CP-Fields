#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w, k, n;
    cin >> k >> n >> w;

    int bananaprice = 0;

    for (int i = 1; i <= w; i++)
    {
        bananaprice = bananaprice + (i * k);
    }

    int borrow = bananaprice - n;

    if (borrow < 0)
        borrow = 0;

    cout << borrow << "\n";

    return 0;
}

// Problem: The i-th banana costs i * k dollars; find how much the soldier must borrow to buy w bananas with n dollars.
// Solution: Sum i * k for i = 1 to w, subtract n, and print max(0, that value).