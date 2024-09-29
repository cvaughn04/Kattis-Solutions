#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <utility>


using namespace std;

int main() {
    int n , q;
    cin >> n >> q;
    map<string, pair<int, string>> mp;
    
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        string initials = "";
        initials += a.substr(0,1) + b.substr(0,1);
        if (mp.find(initials) == mp.end()) {
            mp[initials] = {1, a + " " + b};
        } else {
            mp[initials] = {mp[initials].first + 1, mp[initials].second};
        }
    }
    
    for (int i = 0; i < q; ++i) {
        string c;
        cin >> c;
        if (mp.find(c) == mp.end()) {
            cout << "nobody" << endl;
        } else {
            if (mp[c].first > 1) {
                cout << "ambiguous" << endl;
            } else {
                cout << mp[c].second << endl;
            }
        }
    }
    
    

    return 0;
}