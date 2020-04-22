#include "STL_Hearders.h"
#include <cmath>

double Pow(double x, double y) {
    return pow(x, y);
}

int main() {
    set<int> myset = {3, 1, 25, 7, 12};
    deque<int> deq;
    // 把 function 转换为 functor
    auto Pow_functor = function<double (double, double)>(Pow);
    transform(myset.begin(), myset.end(), back_inserter(deq), bind(Pow_functor, placeholders::_1, 2));
    // deq: {1, 4, 49, 144, 625}
    
    return 0;
}