#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, bool>> board;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        board.push_back({temp, false});
    }

    bool done = false;
    int pos = s - 1;
    int moves = 0;
    while(!done) {
        if (board[pos].second == true) {
            cout << "cycle" << endl;
            done = true;
        } else {

            board[pos].second = true;
            if (board[pos].first == m) {
                cout << "magic" << endl;
                done = true;
            } else {
                int currentMove = board[pos].first;
                if (currentMove > 0) {
                    if (pos + currentMove >= board.size()) {
                        moves++;
                        cout << "right" << endl;
                        done = true;
                    } else {
                        moves++;
                        pos += currentMove;
                    }

                } else {
                    currentMove = abs(currentMove);
                    if (pos - currentMove < 0) {
                        moves++;
                        cout << "left" << endl;
                        done = true;
                    } else {
                        moves++;
                        pos -= currentMove;
                    }
                }
            }
        }

    }
    cout << moves;



    return 0;
}