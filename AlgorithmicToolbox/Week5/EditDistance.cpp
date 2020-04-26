// Problem Description
// Task. The goal of this problem is to implement the algorithm for computing the edit distance between two
// strings.
// Input Format. Each of the two lines of the input contains a string consisting of lower case latin letters.
// Constraints. The length of both strings is at least 1 and at most 100.
// Output Format. Output the edit distance between the given two strings.

#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    return min(min(x, y), z);
}

int editDist(string str1, string str2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
            {
                dp[i][j] = j;
            }
            else if (j == 0)
            {
                dp[i][j] = i;
            }
            else if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int m = str1.size(), n = str2.size();
    int res = editDist(str1, str2, m, n);
    cout << res << endl;
}