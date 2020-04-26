// Problem Description
// Task. Given an integer n, compute the minimum number of operations needed to obtain the number n
// starting from the number 1.
// Input Format. The input consists of a single integer 1 ≤ n ≤ 10 6 .
// Output Format. In the first line, output the minimum number k of operations needed to get n from 1.
// In the second line output a sequence of intermediate numbers. That is, the second line should contain
// positive integers a 0 , a 2 , . . . , a k−1 such that a 0 = 1, a k−1 = n and for all 0 ≤ i < k − 1, a i+1 is equal to
// either a i + 1, 2a i , or 3a i . If there are many such sequences, output any one of them.

// Problem Description
// Input Format. Integer money.
// Output Format. The minimum number of coins with denominations 1, 3, 4 that changes money.
// Constraints. 1 ≤ money ≤ 10 3 .

#include <bits/stdc++.h>
using namespace std;

int changeNum(int ops[], int n, int m)
{
    int table[n + 1];
    table[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        table[i] = INT_MAX;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 3 == 0)
            {
                int sub_res = table[i / 3];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                {
                    table[i] = sub_res + 1;
                }
            }
            if (i % 2 == 0)
            {
                int sub_res = table[i / 2];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                {
                    table[i] = sub_res + 1;
                }
            }
            int sub_res = table[i - 1];
            if (sub_res != INT_MAX && sub_res + 1 < table[i])
            {
                table[i] = sub_res + 1;
            }
        }
    }
    return table[n];
}

int main()
{
    int num;
    int ops[] = {3, 2, 1};
    cin >> num;
    int res = changeNum(ops, num, 3);
    cout << res << endl;
}