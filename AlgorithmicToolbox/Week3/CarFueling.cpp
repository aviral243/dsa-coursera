// Problem Description
// Input Format. The first line contains an integer d. The second line contains an integer m. The third line
// specifies an integer n. Finally, the last line contains integers stop 1 , stop 2 , . . . , stop n .
// Output Format. Assuming that the distance between the cities is d miles, a car can travel at most m miles
// on a full tank, and there are gas stations at distances stop 1 , stop 2 , . . . , stop n along the way, output the
// minimum number of refills needed. Assume that the car starts with a full tank. If it is not possible to
// reach the destination, output −1.
// Constraints. 1 ≤ d ≤ 10 5 . 1 ≤ m ≤ 400. 1 ≤ n ≤ 300. 0 < stop 1 < stop 2 < · · · < stop n < d.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, m, n;
    cin >> d >> m >> n;
    vector<int> stops;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        stops.push_back(i1);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if ((stops[0] > m) || stops[i + 1] - stops[i] > m || (d - stops[n - 1] > m))
        {
            cout << -1;
            exit(0);
        }
    }
    int k = 0, fill = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((stops[i] - k) <= m && (stops[i + 1] - k) > m)
        {
            fill++;
            k = stops[i];
        }
    }
    if (d - k > m)
        fill++;
    cout << fill;
}