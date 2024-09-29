#include <iostream>
using namespace std;

int main() {
    int height{0};
    int blocks;
    cin >> blocks;
    bool done {false};
    int i = 1;
    int tmp {0};

    while (not done) {
        ++height;

        tmp += i * i;
        if (((i+2)*(i+2)) + tmp > blocks) {
            done = true;
        }

        i += 2;
    }
    
    cout << height;
    return 0;
}