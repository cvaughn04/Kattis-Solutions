#include <iostream>
#include <utility>

using namespace std;

int main() {

    int w = 0, l = 0;
    while (cin >> w) {
        cin >> l;

        if (w == 0 && l == 0) {
            return 0;
        }

        int walks;
        cin >> walks;

        pair<int, int> think = {0,0};
        pair<int, int> real {0,0};
        for (int i = 0; i < walks; ++i) {
            char dir; 
            int move;
            cin >> dir >> move;

            if (dir == 'u') {
                think.second += move;
                if (real.second + move >= l) {
                    real.second = l - 1;
                } else {
                    real.second += move;
                }
            } else if (dir == 'd') {
                think.second -= move;
                if (real.second - move < 0) {
                    real.second = 0;
                } else {
                    real.second -= move;
                }
            } else if (dir == 'l') {
                think.first -= move;
                if (real.first - move < 0) {
                    real.first = 0;
                } else {
                    real.first -= move;
                }
            } else if (dir == 'r') {
                think.first += move;
                if (real.first + move >= w) {
                    real.first = w - 1;
                } else {
                    real.first += move;
                }
            }
        }

        cout << "Robot thinks " << think.first << " " << think.second << endl;
        cout << "Actually at " << real.first << " " << real.second << endl;
        cout << endl;


    }



    return 0;
}