#include "STL_Hearders.h"

vector<int> vec = {1, 8, 18, 23, 23, 56};

int main() {
    pair<vector<int>::iterator, vector<int>::iterator> pair_of_itr;
    pair_of_itr = minmax_element(vec.begin(), vec.end(), [](int x, int y){ return (x % 10) < (y % 10);});
    return 0;
}