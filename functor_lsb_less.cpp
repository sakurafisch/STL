#include "STL_Hearders.h"

set<int> myset = {3, 1, 25, 7, 12}; // myset: {1, 3, 7, 12, 15}
// 相当于
// set<int, less<int> > myset = {3, 1, 25, 7, 12};

// 写一个按个位比较大小的 functor
class Lsb_less
{
public:
    Lsb_less(){};
    ~Lsb_less(){};
    bool operator()(int x, int y) {
        return (x % 10) < (y % 10);
    }
};

int main() {
    set<int, Lsb_less> myset2 = {3, 1, 25, 7, 12}; // myset2: {1, 12, 3, 25, 7}

    return 0;
}