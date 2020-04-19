// Problem Description
// Task. Given two integers a and b, find their greatest common divisor.
// Input Format. The two integers a, b are given in the same line separated by space.
// Constraints. 1 ≤ a, b ≤ 2 · 10 9 .
// Output Format. Output GCD(a, b).

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    return gcd(b%a, a);
}

int main() {
    ll a, b;
    cin>>a>>b;
    int div = gcd(a,b);
    cout<<div;
}