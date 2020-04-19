// Problem Description
// Task. Given an integer n, find the last digit of the nth Fibonacci number F n (that is, F n mod 10).
// Input Format. The input consists of a single integer n.
// Constraints. 0 ≤ n ≤ 10 7 .
// Output Format. Output the last digit of F n .

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll fib(ll f[], ll n) {
    f[0] = 0;
    f[1] = 1;

    for(ll i = 2; i <=n; i++) {
        f[i] = (f[i-1] + f[i-2]) % 10; 
    }
    return f[n];
}

int main() {
    ll n;
    cin>>n;
    ll f[60] = {0};
    fib(f, 60);

    ll digit = f[n%60];
    cout<<digit;
}