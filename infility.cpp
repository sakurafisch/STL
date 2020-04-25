#include "STL_Hearders.h"
#include <cstring>
#include <iostream>

const int INF = 0x3f3f3f3f;

int main() {
    int a[10];
    memset(a, INF, sizeof(a));
    
    for (int i = 0; i < 9; i++) {
        cout << a[i] << " ";
    }
    cout << a[9] << endl;

    return 0;
}