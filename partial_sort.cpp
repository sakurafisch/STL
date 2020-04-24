#include "STL_Hearders.h"
#include <iostream>

int main() {
    array<int, 10> arr{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    partial_sort(arr.begin(), arr.begin() + 3, arr.end());
    for (int a : arr) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}