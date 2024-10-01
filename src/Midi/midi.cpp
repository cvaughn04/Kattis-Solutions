#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> notes;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        reverse(temp.begin(), temp.end());
        notes.push_back(temp);
    }

    for (int i = n; i >= 0; --i) {
        cout << notes[i];
    }




    return 0;
}