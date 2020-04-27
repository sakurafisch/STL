#include "STL_Hearders.h"
#include <iostream>

vector<int> vec = {1, 8, 18, 23, 23, 56, 72, 88};


int main() {
    auto itr1 = find(vec.begin(), vec.end(), 18);
    auto itr2 = find_if(vec.begin(), vec.end(), [](int x) { return x > 23; });
    auto itr3 = find_if_not(vec.begin(), vec.end(), [](int x){ return x > 23; });

    cout << *itr1 << " " << *itr2 << " " << *itr3 << endl;
    return 0;
}