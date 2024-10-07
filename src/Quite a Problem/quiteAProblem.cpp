#include <bits/stdc++.h>

using namespace std;

int main() {
    string temp;
    while(getline(cin, temp)) {
        // if (temp != "") {
            bool found = false;
            // cout << temp << endl;
            for (int i = 0; i < temp.size(); ++i) {
                if (temp[i] == 'P' || temp[i] == 'p') {
                    string sub = temp.substr(i, 7);
                    // cout << sub << endl;
                    for (int j = 0; j < 7; ++j) {
                        sub[j] = tolower(sub[j]);
                    }
                    if (sub == "problem" && !found) {
                        cout << "yes" << endl;
                        found = true;
                    }
                }
            }
            if (!found) {
                cout << "no" << endl;

            }
        // }
    }

    return 0;
}