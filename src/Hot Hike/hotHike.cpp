#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int vacay;
    cin >> vacay;   
    vector<int> temps;

    for (int i = 0; i < vacay; ++i) {
        int temp;
        cin >> temp;
        temps.push_back(temp);    
    }
    
    int lowestHigh = 40;
    int startDay = 0;
    
    for (int i = 2; i < vacay; ++i) {
        int a, b, c;
        a = temps[i-2];
        b = temps[i-1];
        c = temps[i];
            
        if ( a > c) {
            if (a < lowestHigh) {
                lowestHigh = a;
                startDay= i-2;
            }
        } else {
            if (c < lowestHigh) {
                lowestHigh = c;
                startDay= i-2;

            }
        }
        
    }
    
    cout << startDay + 1 << " " << lowestHigh;
    

    return 0;
}