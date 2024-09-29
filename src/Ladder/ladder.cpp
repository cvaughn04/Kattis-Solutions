#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int h, v;
    cin >> h >> v;

    float rads = v * M_PI/180.0;
    cout <<  trunc((h / sin(rads))) + 1;
    
    return 0;
}