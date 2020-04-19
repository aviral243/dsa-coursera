// Problem Description
// Task. Compute the last digit of F 0 2 + F 1 2 + · · · + F n 2 .
// Input Format. Integer n.
// Constraints. 0 ≤ n ≤ 10 14 .
// Output Format. The last digit of F 0 2 + F 1 2 + · · · + F n 2 .

#include<bits/stdc++.h>
using namespace std;

#define PISANO 60
typedef long long int ll;

ll calcFib(ll num) {
    ll a = 1, b =1;
    ll res = 1;
    if(num == 0) {
        return 0;
    }
    for(ll i = 0; i<num-2; i++) {
        res = (a+b)%10;
        a = b;
        b = res;
    }
    return res % 10;
}

int main() {
    ll n;
    cin>>n;
    n = n % PISANO;    
    ll m1 = calcFib(n);
    ll m2 = calcFib(n+1);
    ll res = (m1 * m2) % 10;
    cout<<res;
}