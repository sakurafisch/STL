#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> vec1 = {4, 5};
    vector<int> vec2 = {12, 14, 16, 18};
    vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
    insert_iterator<vector<int>> i_itr(vec2, it);
    copy(vec1.begin(), vec1.end(),  // source
        i_itr);                     // destination
    return 0;
}
// vec2: {12, 14, 4, 5, 16, 18}