#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> scentence;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        scentence.push_back(temp);
    }

    map<string, string> dic;

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string temp, temp2;
        cin >> temp >> temp2;
        dic[temp] = temp2;
    }

    for (int i = 0; i < n; ++i) {
        cout << dic[scentence[i]] << " ";
    }




    return 0;
}