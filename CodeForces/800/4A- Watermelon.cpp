#include <bits/stdc++.h>
using namespace std;    

int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

// Problem: Given an integer weight w, determine whether a watermelon
// can be divided into two parts with positive, even integer weights.

// Solution: A valid division is possible only when w is even and greater
// than 2. Therefore, check w > 2 && w % 2 == 0.