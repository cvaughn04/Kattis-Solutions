#include <iostream>
#include <string>

using namespace std;

int main () {
    string get;

    getline(cin, get);

    string tmp; 

    for (int i = 0; i < get.length(); ++i) {
        tmp = get[i];
        if (tmp == "R") {
            get.replace(i,1,"S");
        } else if (tmp == "B") {
            get.replace(i,1,"K");
        } else {
            get.replace(i,1,"H");
        }
    }

    string one, two, three;

    for (int i = 2; i < get.length(); ++i) {
        three = get[i];
        two = get[i-1];
        one = get[i-2];

        if((one != two) and (one != three) and (two != three)) {
            get.replace((i-2),3,"C");
        }


    }

    cout << get;
    return 0;
}