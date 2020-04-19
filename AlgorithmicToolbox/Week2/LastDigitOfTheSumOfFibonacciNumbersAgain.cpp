// Problem Description
// Task. Given two non-negative integers m and n, where m ≤ n, find the last digit of the sum F m + F m+1 +
// · · · + F n .
// Input Format. The input consists of two non-negative integers m and n separated by a space.
// Constraints. 0 ≤ m ≤ n ≤ 10 14 .
// Output Format. Output the last digit of F m + F m+1 + · · · + F n .

#include<bits/stdc++.h>
using namespace std;

#define PISANO 60
typedef long long int ll;

ll calcFibSum(ll num) {
    ll a = 1, b =1;
    ll res = 1;
    for(ll i = 0; i<num; i++) {
        res = (a+b)%10;
        a = b;
        b = res;
    }
    return res % 10;
}

int main() {
    ll m, n;
    cin>>m>>n;
    n = n % PISANO;
    m = m % PISANO;    
    ll s1 = calcFibSum(n);
    ll s2 = calcFibSum(m-1);
    ll res = ((s1 + 10) - s2) % 10;
    cout<<res;
}