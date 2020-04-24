#include "STL_Hearders.h"
#include <iostream>

// 使用 std::unique_copy 消除字符串中多余的空格

int main() {
    string str1 = "The      string    with many         spaces!";
    cout << "before: " << str1 << endl;
    
    string str2;
    unique_copy(str1.begin(), str1.end(), back_inserter(str2), 
        [](char ch1, char ch2){return ch1 == ' ' && ch2 == ' ';});
    cout << "after: " << str2 << endl;

    return 0;
}