#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> vec4;
    // 获取标准输入，写入到 vec4
    copy(istream_iterator<string>(cin), istream_iterator<string>(), 
            back_inserter(vec4));
    // 把 vec4 打印到标准输出
    copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, ""));

    // 获取标准输入，直接打印到标准输出
    copy(istream_iterator<string>(cin), istream_iterator<string>(), ostream_iterator<string>(cout, " "));
    return 0;
}
