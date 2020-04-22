#include "STL_Hearders.h"
#include <iostream>

int main() {
    vector<int> vec = {-4, -5, -8, 6, 7, 9, 11, 15, 16, 20};
    int num = count_if(vec.begin(), vec.end(), [](int x) {return x < 10;});
    cout << num << endl;
    
    return 0;
}