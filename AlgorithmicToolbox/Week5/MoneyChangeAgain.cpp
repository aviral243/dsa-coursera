// Problem Description
// Input Format. Integer money.
// Output Format. The minimum number of coins with denominations 1, 3, 4 that changes money.
// Constraints. 1 ≤ money ≤ 10 3 .

#include <bits/stdc++.h>
using namespace std;

int changeMoney(int coins[], int n, int m)
{
    int table[n + 1];
    table[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        table[i] = INT_MAX;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (coins[j] <= i)
            {
                int sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                {
                    table[i] = sub_res + 1;
                }
            }
        }
    }
    return table[n];
}

int main()
{
    int money;
    int coins[] = {1, 3, 4};
    cin >> money;
    int res = changeMoney(coins, money, 3);
    cout << res << endl;
}