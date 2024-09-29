#include <iostream>
#include <string>

using namespace std;

int main () {
    int pokemon;
    int poffins;
    int mod;
    int min;

    cin >> pokemon;
    cin >> poffins;

    mod = (poffins % pokemon);

    if (mod == 0) {
        min = 0;
    } else {
        min = 1;
    }
    cout << min;

    return 0;
}