#include "STL_Hearders.h"
#include <iostream>

vector<int> vec = {1, 2, 2, 3};

int main() {
    int a = lower_bound(vec.begin(), vec.end(), 2) - vec.begin();
    cout << a << endl;

    return 0;
}