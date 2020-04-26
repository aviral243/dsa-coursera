// Problem Description
// Task. Given three sequences A = (a 1 , a 2 , . . . , a n ), B = (b 1 , b 2 , . . . , b m ), and C = (c 1 , c 2 , . . . , c l ), find the
// length of their longest common subsequence, i.e., the largest non-negative integer p such that there
// exist indices 1 ≤ i 1 < i 2 < · · · < i p ≤ n, 1 ≤ j 1 < j 2 < · · · < j p ≤ m, 1 ≤ k 1 < k 2 < · · · < k p ≤ l such
// that a i 1 = b j 1 = c k 1 , . . . , a i p = b j p = c k p
// Input Format. First line: n. Second line: a 1 , a 2 , . . . , a n . Third line: m. Fourth line: b 1 , b 2 , . . . , b m . Fifth line:
// l. Sixth line: c 1 , c 2 , . . . , c l .
// Constraints. 1 ≤ n, m, l ≤ 100; −10 9 < a i , b i , c i < 10 9 .
// Output Format. Output p.

#include <bits/stdc++.h>
using namespace std;

int lcs3(vector<int> X, vector<int> Y, vector<int> Z, int m, int n, int o)
{
    int L[m + 1][n + 1][o + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= o; k++)
            {
                if (i == 0 || j == 0 || k == 0)
                {
                    L[i][j][k] = 0;
                }
                else if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1])
                {
                    L[i][j][k] = 1 + L[i - 1][j - 1][k - 1];
                }
                else
                {
                    L[i][j][k] = max(max(L[i - 1][j][k], L[i][j - 1][k]), L[i][j][k - 1]);
                }
            }
        }
    }
    return L[m][n][o];
}

int main()
{
    vector<int> s1, s2, s3;
    int m, n, o;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int i1;
        cin >> i1;
        s1.push_back(i1);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        s2.push_back(i1);
    }
    cin >> o;
    for (int i = 0; i < o; i++)
    {
        int i1;
        cin >> i1;
        s3.push_back(i1);
    }

    int res = lcs3(s1, s2, s3, m, n, o);
    cout << res;
}