#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    int f = 0;
    if (n >= 13) {
        f = 13;
    } else {
        f = 13 % n;
    }

    if (f == 0) {
        string temp;
        cin >> temp;
        cout << temp;
        return 0;
    }

    string bro;
    for (int i = 1; i <= f; ++i) {
        cin >> bro;
        if (i == f) {
            cout << bro;
        }
    }





    return 0;
}