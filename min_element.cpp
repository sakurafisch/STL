#include "STL_Hearders.h"
#include <iostream>

int main() {
    vector<int> vec = {-4, -5, -8, -11, 6, 7, 9, 11, 15, 16, 20};
    auto itr = min_element(vec.begin(), vec.end());  // -11
    cout << *itr << endl;
    itr = min_element(vec.begin(), vec.end(), [](int x, int y){return (x % 10) < (y % 10);});  // -8
    cout << *itr << endl;
    return 0;
}