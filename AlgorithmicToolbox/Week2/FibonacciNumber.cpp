// Problem Description
// Task. Given an integer n, find the nth Fibonacci number F n .
// Input Format. The input consists of a single integer n.
// Constraints. 0 ≤ n ≤ 45.
// Output Format. Output F n .

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a = 0, b =1, c, i;

    if (n == 0) {
        cout<<a;
    } else
    {
        for(i = 2; i<=n; i++) {
            c = a+b;
            a= b;
            b = c;
        }
        cout<<b;
        }
}
