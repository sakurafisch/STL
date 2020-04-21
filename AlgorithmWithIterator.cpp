#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {4, 2, 5, 1, 3, 9};
    vector<int>::iterator itr = min_element(vec.begin(), vec.end()); // itr -> 1

    // 对一部分元素排序
    sort(vec.begin(), itr);  // vec: {2, 4, 5, 1, 3, 9}

    // 对一部分元素翻转
    reverse(itr, vec.end()); // vec: {2, 4, 5, 9, 3, 1}   itr -> 9

    vector<int> vec2(3);
    // 把 vec 的一部分元素拷贝到 vec2
    copy(itr, vec.end(),  // Source
        vec2.begin());    // Destination

    vector<int> vec3;
    // 把 vec 的一部分元素逐个插入到 vec3 的尾部，因为逐个插入所以效率低
    copy(itr, vec.end(), back_inserter(vec3));

    vector<int> vec4;
    // 把 vec 的一部分元素一次性插入到 vec4 的尾部，安全高效
    vec3.insert(vec3.end(), itr, vec.end());

    return 0;
}

