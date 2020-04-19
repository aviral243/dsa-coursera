#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int MaxPairwiseProduct(const vector<long long int> numbers) {
    long long int max_product = 0;
    long long int n = numbers.size();
    long long int max1 = 0, max2 = 0, i, max_index;

    for(i= 0; i<n; i++) {
        if(numbers[i] > max1) {
            max1 = numbers[i];
            max_index = i;
        }
    }

    for(i = 0; i<n; i++) {
        if(numbers[i] > max2 && i != max_index) {
            max2 = numbers[i];
        }
    }
    max_product = max1 * max2;
    return max_product;
}

int main() {
    long long int n;
    cin>>n;
    vector<long long int> numbers(n);

    for(int i = 0; i<n; i++) {
        cin>>numbers[i];
    }

    cout<<MaxPairwiseProduct(numbers);
}