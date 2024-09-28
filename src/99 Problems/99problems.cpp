#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    int modN;
    int NN{99};
    cin >> n;
    
    if (n <= 99) {
        cout << NN;
    } else {
        modN = (n % 100);
        if (modN < 49) {
            n -= (modN + 1);
        }else if (modN > 49) {
            int subnum = 99 - modN;
            n += subnum;
        } else {
            n += 50;
        }
        
        cout << n;
    }
    
    return 0;
}