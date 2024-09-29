#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    int p, w;
    cin >> p >> w;
    
    int h = (p * w) / 100;
    // cout << h;
    cout << "[";
    for (int i = 0; i < h; ++i) {
        cout << "#";
    }
    for (int i = 0; i < w-h; ++i) {
        cout << "-";
    }
    cout << "] | ";
    cout << setw(3) << fixed << p << "%" << endl;

}