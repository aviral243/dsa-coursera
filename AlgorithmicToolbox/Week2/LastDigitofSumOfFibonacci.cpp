// Problem Description
// Task. Given an integer n, find the last digit of the sum F 0 + F 1 + · · · + F n .
// Input Format. The input consists of a single integer n.
// Constraints. 0 ≤ n ≤ 10 14 .
// Output Format. Output the last digit of F 0 + F 1 + · · · + F n .

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define PISANO 60

int main() {
    ll n;
    cin>>n;
    if(n < 2) {
        cout<<n;
        exit(0);
    }
    ll a = 1, b = 1, res=1;
    
    n %= PISANO;

    for(ll i = 0; i < n; i++) {
        res = (a + b) % 10;
        a = b;
        b = res;
    }
    cout<<(((res+10) - 1) % 10);
}