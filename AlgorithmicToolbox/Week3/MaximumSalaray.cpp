// Problem Description
// Task. Compose the largest number out of a set of integers.
// Input Format. The first line of the input contains an integer n. The second line contains integers
// a 1 , a 2 , . . . , a n .
// Constraints. 1 ≤ n ≤ 100; 1 ≤ a i ≤ 10 3 for all 1 ≤ i ≤ n.
// Output Format. Output the largest number that can be composed out of a 1 , a 2 , . . . , a n .
#include <bits/stdc++.h>
using namespace std;

bool compare(int X, int Y)
{
    string x = to_string(X);
    string y = to_string(Y);
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx) > 0 ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        num.push_back(i1);
    }

    sort(num.begin(), num.end(), compare);
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i];
    }
    cout << endl;
}