#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    long long c = 0;
    cin >> c;
    set<long long> s;
    
    for (long long i = 1; i < sqrt(c) + 2; i++) {
        if (c % i == 0) {
            s.insert(i);
            s.insert(c / i);
        }
    }
    

    for (const auto& e : s) {
        cout << e - 1 << " ";
    }

    return 0;
}