// Problem Description
// Task. To force the given implementation of the quick sort algorithm to efficiently process sequences with
// few unique elements, your goal is replace a 2-way partition with a 3-way partition. That is, your new
// partition procedure should partition the array into three parts: < x part, = x part, and > x part.
// Input Format. The first line of the input contains an integer n. The next line contains a sequence of n
// integers a 0 , a 1 , . . . , a n−1 .
// Constraints. 1 ≤ n ≤ 10 5 ; 1 ≤ a i ≤ 10 9 for all 0 ≤ i < n.
// Output Format. Output this sequence sorted in non-decreasing order.

#include <bits/stdc++.h>
using namespace std;

void partition(vector<int> &A, int l, int r, int &i, int &j)
{
    i = l - 1, j = r;
    int p = l - 1, q = r;
    int v = A[r];
    while (true)
    {
        while (A[++i] < v)
            ;
        while (v < A[--j])
        {
            if (j == l)
            {
                break;
            }
        }
        if (i >= j)
            break;
        swap(A[i], A[j]);

        if (A[i] == v)
        {
            p++;
            swap(A[p], A[i]);
        }

        if (A[j] == v)
        {
            q--;
            swap(A[j], A[q]);
        }
    }
    swap(A[i], A[r]);

    j = i - 1;
    for (int k = l; k < p; k++, j--)
    {
        swap(A[k], A[j]);
    }

    i = i + 1;
    for (int k = r - 1; k > q; k--, i++)
    {
        swap(A[i], A[k]);
    }
}

void quickSort(vector<int> &A, int l, int r)
{
    if (r <= l)
        return;
    int i, j;
    partition(A, l, r, i, j);
    // quickSort(A, l, j);
    // quickSort(A, i, r);
}

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int i1;
        cin >> i1;
        A.push_back(i1);
    }
    quickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}