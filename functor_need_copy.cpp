#include "STL_Hearders.h"

class NeedCopy {
public:
    bool operator()(int x) {
        return (x > 20 || x < 5);
    }
};

set<int> myset = {3, 1, 25, 7, 12}; // myset: {1, 3, 7, 12, 15}
deque<int> d;

int main() {
    transform(myset.begin(), myset.end(), back_inserter(d), NeedCopy());
    return 0;
}