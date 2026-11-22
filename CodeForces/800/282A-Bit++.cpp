#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int x=0;

    while(n--)
    {
        string s;
        cin>>s;

        if (s[1] == '+')
        {
            x++;
        }
        else 
        {
            x--;
        }

    }

    cout<<x<<"\n";

    return 0;
}

// Problem: Start x at 0 and apply n statements of the form ++X, X++, --X, X--; print the final x.
// Solution: Only the middle character s[1] matters: '+' means x++, otherwise x--.