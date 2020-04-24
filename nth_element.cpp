#include "STL_Hearders.h"
#include <iostream>

int main()
{
    vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3};
 
    nth_element(v.begin(), v.begin()+1, v.end(), std::greater<int>());
    cout << "The second largest element is " << v[1] << '\n';

    return 0;
}