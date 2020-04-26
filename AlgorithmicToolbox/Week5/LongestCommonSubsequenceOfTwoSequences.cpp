// Problem Description
// Task. Given two sequences A = (a 1 , a 2 , . . . , a n ) and B = (b 1 , b 2 , . . . , b m ), find the length of their longest
// common subsequence, i.e., the largest non-negative integer p such that there exist indices 1 ≤ i 1 <
// i 2 < · · · < i p ≤ n and 1 ≤ j 1 < j 2 < · · · < j p ≤ m, such that a i 1 = b j 1 , . . . , a i p = b j p .
// Input Format. First line: n. Second line: a 1 , a 2 , . . . , a n . Third line: m. Fourth line: b 1 , b 2 , . . . , b m .
// Constraints. 1 ≤ n, m ≤ 100; −10 9 < a i , b i < 10 9 .
// Output Format. Output p.

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int lcs(vector<int> X, vector<int> Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[m][n];
}

int main()
{
    vector<int> seq1, seq2;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int i1;
        cin >> i1;
        seq1.push_back(i1);
    }

    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int i1;
        cin >> i1;
        seq2.push_back(i1);
    }
    int res = lcs(seq1, seq2, n1, n2);
    cout << res << endl;
}