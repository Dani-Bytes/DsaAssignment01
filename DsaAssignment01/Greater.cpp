#include "Greater.h"
int main() {
    Greater x;
    vector<int> v = { 6, 8, 1, 18, 15 };
    vector<int> res = x.nextGreaterElements(v);

    cout << "The next greater elements are: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
