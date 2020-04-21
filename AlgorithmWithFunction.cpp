#include <algorithm>
#include <vector>
using namespace std;

bool isOdd(int i) { return i % 2;}

int main() {
    vector<int> vec = {2, 4, 5, 9, 2};
    // 寻找第一个奇数元素
    vector<int>::iterator itr = find_if(vec.begin(), vec.end(), isOdd);  // itr -> 5
}