// Problem Description
// Task. The goal in this problem is to find the minimum number of coins needed to change the input value
// (an integer) into coins with denominations 1, 5, and 10.
// Input Format. The input consists of a single integer m.
// Constraints. 1 ≤ m ≤ 10 3 .
// Output Format. Output the minimum number of coins with denominations 1, 5, 10 that changes m.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    res += n / 10;
    n = n % 10;
    res += n / 5;
    n %= 5;
    res += n;
    cout << res;
}