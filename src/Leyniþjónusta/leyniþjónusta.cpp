#include <bits/stdc++.h>

using namespace std;

int main() {
    string temp;
    getline(cin, temp);

    for (int i = 0; i < temp.length(); ++i) {
        if (temp[i] != ' ') {
            cout << temp[i];
        }
    }



    return 0;
}