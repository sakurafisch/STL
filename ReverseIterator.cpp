#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {4, 5, 6, 7};
    reverse_iterator<vector<int>::iterator> ritr;
    for(ritr = vec.rbegin(); ritr != vec.rend(); ritr++) {
        cout << *ritr << endl;
    }
    return 0;
}
