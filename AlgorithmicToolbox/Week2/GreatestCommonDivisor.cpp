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