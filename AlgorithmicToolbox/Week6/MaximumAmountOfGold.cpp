// Problem Description

// Task. Given n gold bars, find the maximum weight of gold that fits into a bag of capacity W .

// Input Format. The first line of the input contains the capacity W of a knapsack and the number n of bars
// of gold. The next line contains n integers w 0 , w 1 , . . . , w n−1 defining the weights of the bars of gold.

// Constraints. 1 ≤ W ≤ 10 4 ; 1 ≤ n ≤ 300; 0 ≤ w 0 , . . . , w n−1 ≤ 10 5 .

// Output Format. Output the maximum weight of gold that fits into a knapsack of capacity W .

#include <bits/stdc++.h>
using namespace std;

int maxGold(int w, vector<int> wts)
{
    int n = wts.size();
    vector<vector<int>> res(n + 1, vector<int>(w + 1, 0));

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= w; j++)
    //     {
    //         res[i].push_back(0);
    //     }
    // }

    for (int i = 0; i <= n; i++)
    {
        // cout << endl;
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                res[i][j] = 0;
            }
            else if (wts[i - 1] <= j)
            {
                res[i][j] = max(wts[i - 1] + res[i - 1][j - wts[i - 1]], res[i - 1][j]);
            }
            else
            {
                res[i][j] = res[i - 1][j];
            }
            // cout << res[i][j] << " ";
        }
    }
    return res[n][w];
}

int main()
{
    int W, n;
    cin >> W >> n;
    vector<int> wts;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        wts.push_back(i1);
    }

    int res = maxGold(W, wts);
    cout << res << endl;
}
