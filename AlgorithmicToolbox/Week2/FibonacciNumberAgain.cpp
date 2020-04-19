#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll pisanoPeriod(ll m) {
    int a = 0, b = 1, c = a+b;
    for(int i = 0; i<m*m; i++) {
        c = (a+b) % m;
        a = b;
        b = c;
        if(a==0 && b==1) return i+1;
    }
    return 1;
}

ll getFibonacci(ll n, ll m) {
    ll rem = n % pisanoPeriod(m);

    ll a = 0, b = 1;
    ll res = rem;

    for(int i = 1; i<rem; i++) {
        res = (a+b);
        a = b;
        b = res;
    }

    return res % m;
}

int main() {
    ll n, m;
    cin>>n>>m;
    cout<<getFibonacci(n, m);
}