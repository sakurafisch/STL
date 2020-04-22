#include "STL_Hearders.h"

set<int> myset = {2, 3, 4, 5};
vector<int> vec;

int x = multiplies<int>()(3, 4);  // x = 3 * 4

int main() {
    transform(myset.begin(), myset.end(), back_inserter(vec), bind(multiplies<int>(), placeholders::_1, 10));
    // vec: {20, 30, 40, 50}
    
    return 0;
}