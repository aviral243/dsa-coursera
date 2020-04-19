// Problem Description
// Task. Given two integers a and b, find their least common multiple.
// Input Format. The two integers a and b are given in the same line separated by space.
// Constraints. 1 ≤ a, b ≤ 10 7 .
// Output Format. Output the least common multiple of a and b.

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
    ll div = gcd(a,b);
    ll lcm = (a*b)/div;
    cout<<lcm;
}