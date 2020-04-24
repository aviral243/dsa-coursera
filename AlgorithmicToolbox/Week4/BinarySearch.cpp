// Problem Description
// Task. The goal in this code problem is to implement the binary search algorithm.
// Input Format. The first line of the input contains an integer n and a sequence a 0 < a 1 < . . . < a n−1
// of n pairwise distinct positive integers in increasing order. The next line contains an integer k and k
// positive integers b 0 , b 1 , . . . , b k−1 .
// Constraints. 1 ≤ k ≤ 10 5 ; 1 ≤ n ≤ 3 · 10 4 ; 1 ≤ a i ≤ 10 9 for all 0 ≤ i < n; 1 ≤ b j ≤ 10 9 for all 0 ≤ j < k;
// Output Format. For all i from 0 to k − 1, output an index 0 ≤ j ≤ n − 1 such that a j = b i or −1 if there
// is no such index.

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int binarySearch(vector<int> &num, int k)
{
    int n = num.size();
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (num[mid] == k)
        {
            return mid;
        }
        else if (num[mid] < k)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return -1;
}

int main()
{
    ll n;
    cin >> n;
    vector<int> num;
    for (auto i = 0; i < n; i++)
    {
        ll i1;
        cin >> i1;
        num.push_back(i1);
    }
    int toFind;
    cin >> toFind;
    vector<int> keys;
    for (auto i = 0; i < toFind; i++)
    {
        ll i1;
        cin >> i1;
        keys.push_back(i1);
    }
    vector<int> res;
    for (int i = 0; i < toFind; i++)
    {
        ll find = binarySearch(num, keys[i]);
        res.push_back(find);
    }
    for (int i = 0; i < toFind; i++)
    {
        cout << res[i] << " ";
    }
}