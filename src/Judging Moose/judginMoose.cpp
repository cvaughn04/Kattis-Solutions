#include <bits/stdc++.h>

using namespace std;

int main() {

    int a , b;
    cin >> a >> b;

    if (a > b) {
            cout << "Odd " << a * 2 << endl;

    } else if (b > a) {
            cout << "Odd " << b * 2 << endl;

    } else {
        if (a == 0) {
            cout << "Not a moose" << endl;
        } else {
            cout << "Even " << a * 2 << endl;

        }
    }



    return 0;
}