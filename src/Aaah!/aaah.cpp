#include <iostream>
#include <string>

using namespace std;

int main () { 

    
    string jon;
    string doctor;

    getline(cin, jon);
    getline(cin, doctor);

    if (jon <= doctor) {
        cout << "go";
    } else {
        cout << "no";
    }



    return 0;   
}