#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string username;
    cin>>username;

    int alphabet[26] = {0};

    int distinct=0;

    for (char c : username)
    {
        int alphanum = c - 'a'; // mistaken by - 32 (that method is for case problems)
        alphabet[alphanum]++;
    }

    for (int i = 0; i < 26 ; i++)
    {
        if(alphabet[i] > 0) // mistaken by == 1
        {
            distinct++;
        }
    }

    if (distinct % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else 
    {
        cout<<"IGNORE HIM!"<<"\n";
    }

    return 0;
}

// Problem: Count the distinct letters in a username; if the count is even print "CHAT WITH HER!", otherwise "IGNORE HIM!".
// Solution: Mark each letter in a frequency array using c - 'a', count entries with alphabet[i] > 0, then check the count's parity.