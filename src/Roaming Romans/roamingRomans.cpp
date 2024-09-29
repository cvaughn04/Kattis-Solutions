#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    float m;
    cin >> m;
    
    m = (m * 5280) / 4854 * 1000;
    int r;

    r = round(m);
    cout << r;    
    

    return 0;
}