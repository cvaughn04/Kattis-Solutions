#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r = 0, f = 0;
    cin >> r >> f;
    int half = r / 2;
    
    int uod = floor(f/r);
    if (uod % 2 == 0) {
        if ((f % r) > half) {
            cout << "down";
        } else {
            cout << "up";
        }
    } else {
        if ((f % r) > half) {
            cout << "up";
        } else {
            cout << "down";
        }
    }

    
    return 0;
}