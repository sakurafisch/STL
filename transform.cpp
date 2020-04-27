#include "STL_Hearders.h"
#include <iostream>
#include <cmath>


double Pow(double x, double y) {
    return pow(x, y);
}

int main() {
    set<int> myset = {3, 1, 25, 7, 12};
    deque<int> d;
    auto f = function<double (double,double)> (Pow);
    transform(myset.begin(), myset.end(), back_inserter(d), bind(f, placeholders::_1, 2));
    for (auto itr = d.begin(); itr != d.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}