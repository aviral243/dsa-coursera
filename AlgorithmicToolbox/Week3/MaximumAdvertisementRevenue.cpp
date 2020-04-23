// Problem Description
//     Task.Given two sequences a 1,
//     a 2, ..., a n(a i is the profit per click of the i - th ad) and b 1, b 2, ..., b n(b i is the average number of clicks per day of the i - th slot), we need to partition them into n pairs(a i, b j) such that the sum of their products is maximized.Input Format.The first line contains an integer n, the second one contains a sequence of integers a 1, a 2, ..., a n, the third one contains a sequence of integers b 1, b 2, ..., b n.Constraints.1 ≤ n ≤ 10 3; −10 5 ≤ a i , b i ≤ 10 5 for all 1 ≤ i ≤ n.
// Output Format. Output the maximum value of
// n
// ∑︀
// a i c i , where c 1 , c 2 , . . . , c n is a permutation of
// i=1
// b 1 , b 2 , . . . , b n .

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    vector<ll> b;
    for (int i = 0; i < n; i++)
    {
        ll i1;
        cin >> i1;
        a.push_back(i1);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        ll i1;
        cin >> i1;
        b.push_back(i1);
    }
    sort(b.begin(), b.end());

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum;
}