#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    
    int s;
    cin >> s;
    
    cout << s << ":" << endl;
    
    for (int i = 2; i <= s; ++i) {

        //odd # rows plus row + row-1 is factor
        if ((s - i) % (i * 2 - 1) == 0) {
            if (i <= s/2) {
                cout << i << "," << i-1 << endl;
            }
        }
        
        //row + row-1 is factor
        if (s % (i * 2 - 1) == 0) {
            cout << i << "," << i-1 << endl;
        }
        
        //factor and not over half
        if (s % i == 0) {
            if (i <= s/2) {
                cout << i << "," << i << endl;
            }
        }
    }

    
    return 0;
}