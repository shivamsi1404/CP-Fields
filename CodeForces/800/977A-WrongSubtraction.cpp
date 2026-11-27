#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    while(k--)
    {
        if(!(n%10==0)){
            n = n - 1;
        }
        else{
            n = n/10;
        }
    }

    cout<<n<<endl;
}

// Problem: Subtract 1 from n, k times, but if the last digit is 0, divide by 10 instead; print the result.
// Solution: Simulate k steps: if n % 10 != 0 do n--, otherwise n /= 10.