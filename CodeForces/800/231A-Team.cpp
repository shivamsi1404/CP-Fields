#include <bits/stdc++.h>
using namespace std;    

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    while (n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        
        if (a+b+c>=2)
        {
            count++;
        } 
    }

    cout<<count<<"\n";

    return 0;
}

// Problem: Count the problems where at least two of three friends are sure of the solution.
// Solution: For each row, if a + b + c >= 2, increment the counter; print it once at the end.