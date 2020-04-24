#include "STL_Hearders.h"
#include <iostream>

int main() {
    // 含有数个重复元素的 vector
    vector<int> ver{1, 2, 1, 1, 3, 3, 4, 5, 4};

    // 移除相继（毗邻）的重复元素
    auto last = unique(ver.begin(), ver.end());
    // v 现在保有 {1 2 1 3 4 5 4 x x x} ，其中 x 不确定
    for (int v : ver) {
        cout << v << " ";
    }
    cout << endl;


    // sort 后 unique 以移除所有重复
    sort(ver.begin(), ver.end()); // {1 1 2 3 4 4 5}
    last = unique(ver.begin(), ver.end());
    // v 现在保有 {1 2 3 4 5 x x} ，其中 'x' 不确定
    for (int v : ver) {
        cout << v << " ";
    }
    cout << endl;

    // 擦除last指针之后的数据
    ver.erase(last, ver.end()); 
    for (int v : ver)
        cout << v << " ";
    cout << "\n";
    return 0;
}