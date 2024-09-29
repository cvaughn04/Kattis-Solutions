#include <iostream>
#include <set>

using namespace std; 

int main() {
    int n;
    set<int> s;
    while (cin >> n) {
        s.insert(n % 42);
    }
    
    cout << s.size();
    
    
    
    return 0;
}