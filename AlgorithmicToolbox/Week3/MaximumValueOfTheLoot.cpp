// Problem Description
// Task. The goal of this code problem is to implement an algorithm for the fractional knapsack problem.
// Input Format. The first line of the input contains the number n of items and the capacity W of a knapsack.
// The next n lines define the values and weights of the items. The i-th line contains integers v i and w i —the
// value and the weight of i-th item, respectively.
// Constraints. 1 ≤ n ≤ 10 3 , 0 ≤ W ≤ 2 · 10 6 ; 0 ≤ v i ≤ 2 · 10 6 , 0 < w i ≤ 2 · 10 6 for all 1 ≤ i ≤ n. All the
// numbers are integers.
// Output Format. Output the maximal value of fractions of items that fit into the knapsack. The absolute
// value of the difference between the answer of your program and the optimal value should be at most
// 10 −3 . To ensure this, output your answer with at least four digits after the decimal point (otherwise
// your answer, while being computed correctly, can turn out to be wrong because of rounding issues).

#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<double, double> &A, const pair<double, double> &B)
{
    return (A.first / A.second) > (B.first / B.second);
}

int main()
{
    double n, wt = 0.0000;

    cin >> n >> wt;
    vector<pair<double, double>> items;
    for (double i = 0; i < n; i++)
    {
        double i1, i2;
        cin >> i1 >> i2;
        items.push_back(make_pair(i1, i2));
    }
    sort(items.begin(), items.end(), comp);

    double value = 0;

    for (int i = 0; i < n; i++)
    {
        if (wt >= items[i].second)
        {
            wt -= items[i].second;
            value += items[i].first;
        }
        else
        {
            value += (double)((wt) * (items[i].first / items[i].second));
            wt = 0;
            break;
        }
    }
    cout << fixed << setprecision(4) << value;
}