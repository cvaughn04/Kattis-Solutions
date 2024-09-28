#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    vector<pair<pair<int, float>, string>> v;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string block;
        int dimension;
        
        cin >> block >> dimension;
        pair<pair<int, float>, string> pp; 
        if (block == "cube") {
            float sortDim = sqrt(pow(dimension, 2) + pow(dimension,2));
            pp = {{dimension, sortDim}, block};
        } else {
            float sortDim = dimension * 2;
            pp = {{dimension, sortDim}, block};
        }
        v.push_back(pp);
    }

    sort(v.begin(), v.end(), [](const pair<pair<int, float>, string> &a, const pair<pair<int, float>, string> &b) {
        return a.first.second < b.first.second;
    });


    // for (const auto &p : v) {
    //     cout << p.first.first << "-" << p.first.second << " - " << p.second << endl;
    // }
    // cout << "--------------------------------" << endl;
    
    
    for (int i = 1; i < v.size(); ++i) {
        if (v[i-1].second == "cylinder" && v[i].second == "cube") {
            if (v[i-1].first.second < v[i].first.second) {
                if (v[i-1].first.first * 2 > v[i].first.first) {
                    cout << "impossible" << endl;
                    return 0;
                }
            }
        }
    }
    
    
    for (const auto &p : v) {
        cout << p.second << " " << p.first.first << endl;
    }

    return 0;
}