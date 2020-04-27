#include "STL_Hearders.h"
#include <iostream>

vector<int> vec = {1, 8, 18, 23, 23, 56};
int main() {
    int n = count(vec.begin(), vec.end(), 23); // 2;
    cout << n << endl;
    return 0;
}