// Problem Description
// Task. The goal in this code problem is to check whether an input sequence contains a majority element.
// Input Format. The first line contains an integer n, the next one contains a sequence of n non-negative
// integers a 0 , a 1 , . . . , a n−1 .
// Constraints. 1 ≤ n ≤ 10 5 ; 0 ≤ a i ≤ 10 9 for all 0 ≤ i < n.
// Output Format. Output 1 if the sequence contains an element that appears strictly more than n/2 times,
// and 0 otherwise.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> seq;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        seq.push_back(i1);
    }

    sort(seq.begin(), seq.end());

    int flag = 0, ct = 1;
    int ele = seq[0];

    for (int i = 1; i < n; i++)
    {
        if (seq[i] == ele)
        {
            ct++;
            if (ct > n / 2)
            {
                flag = 1;
                break;
            }
        }
        else
        {
            ele = seq[i];
            ct = 1;
        }
    }
    cout << flag << endl;
}