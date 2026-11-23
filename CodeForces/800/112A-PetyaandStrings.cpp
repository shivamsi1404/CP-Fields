#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    cin >> a >> b;

    int size = a.size() - 1;
    int count = 0;

    while (count <= size)
    {
        char a1 = a[count];
        char a2 = b[count];

        if (a1 >= 'A' && a1 <= 'Z')
        {
            a1 = a1 + 32;
        }
        if (a2 >= 'A' && a2 <= 'Z')
        {
            a2 = a2 + 32;
        }

        a1 = a1 - 32;
        a2 = a2 - 32;

        if (a1 > a2)
        {
            cout << 1;
            break;
        }
        else if (a1 < a2)
        {
            cout << -1;
            break;
        }
        else
        {
            count++;
        }
    }

    if (count == size + 1)
    {
        cout << 0;
    }

    return 0;
}