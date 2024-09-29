#include <iostream>

using namespace std;

int main() {
    int n, t, r = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        if (t < 0) {
            ++r;
        }
    }
    cout << r << endl;
    return 0;
}