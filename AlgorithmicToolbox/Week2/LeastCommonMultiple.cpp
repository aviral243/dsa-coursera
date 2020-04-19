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