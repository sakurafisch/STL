#include "STL_Hearders.h"
#include <iostream>

int main() {
    vector<int> vec = {-4, -5, -8, 6, 7, 9, 11, 15, 16, 20};
    auto itr = max_element(vec.begin(), vec.end());  // 20
    cout << *itr << endl;
    itr = max_element(vec.begin(), vec.end(), [](int x, int y){return (x % 10) < (y % 10);});  // 9
    cout << *itr << endl;
    return 0;
}