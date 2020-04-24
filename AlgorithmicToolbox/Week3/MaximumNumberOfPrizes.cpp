// Problem Description
// Task. The goal of this problem is to represent a given positive integer n as a sum of as many pairwise
// distinct positive integers as possible. That is, to find the maximum k such that n can be written as
// a 1 + a 2 + · · · + a k where a 1 , . . . , a k are positive integers and a i ̸ = a j for all 1 ≤ i < j ≤ k.
// Input Format. The input consists of a single integer n.
// Constraints. 1 ≤ n ≤ 10 9 .
// Output Format. In the first line, output the maximum number k such that n can be represented as a sum
// of k pairwise distinct positive integers. In the second line, output k pairwise distinct positive integers
// that sum up to n (if there are many such representations, output any of them).

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;
    double i = sqrt(1 + 8 * n) - 1;
    i /= 2;
    i = floor(i);
    cout << i << endl;
    vector<int> res;
    for (int j = 1; j < i; j++)
    {
        res.push_back(j);
    }
    int x = i - 1;
    res.push_back(n - ((x * (x + 1)) / 2));
    for (int j = 0; j < res.size(); j++)
    {
        cout << res[j] << " ";
    }
}