#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cutoff = arr[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= cutoff && arr[i] > 0)
        {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}

// 158A - Next Round: Given n sorted scores (non-increasing), count participants with score >= the k-th place score and score > 0.
// Solution: Take cutoff = arr[k-1], loop once and count scores where arr[i] >= cutoff && arr[i] > 0.