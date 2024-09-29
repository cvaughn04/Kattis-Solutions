#include <iostream>

using namespace std;

int main() {
    int gunnar = 0;
    int emma = 0;

    
    for (int i = 0; i < 4; ++i) {
        int temp;
        cin >> temp;
        gunnar += temp;
    }
    
    for (int i = 0; i < 4; ++i) {
        int temp;
        cin >> temp;
        emma += temp;
    }
    
    if (gunnar > emma) {
        cout << "Gunnar";
    } else if (emma > gunnar) {
        cout << "Emma";
    } else {
        cout << "Tie";
    }
    
    return 0;
}