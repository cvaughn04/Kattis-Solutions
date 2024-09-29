#include <iostream>
#include <string>

using namespace std;

int main () {
    float tank;
    float halftank;
    float leak;
    float miles;

    cin >> tank;
    cin >> leak;
    cin >> miles;

    halftank = 0.5 * tank;

    float MPH[6];
    float MPG[6];

    float tempMPH;
    float tempMPG;

    // for (int i = 0; i < 6; ++i) {
    //     cin >> tempMPH;
    //     cin >> tempMPG;

    //     MPH[i] = tempMPH;
    //     MPG[i] = tempMPG;
    // }


    cin >> MPH[5]; 
    cin >> MPG[5];
    cin >> MPH[4]; 
    cin >> MPG[4];
    cin >> MPH[3]; 
    cin >> MPG[3];
    cin >> MPH[2]; 
    cin >> MPG[2];
    cin >> MPH[1]; 
    cin >> MPG[1];
    cin >> MPH[0]; 
    cin >> MPG[0];




    float hours;
    float totalLeak;
    float gallonsHave;

    float gallonsToGetThere;
    bool yes {false};
    

    for (int i = 0; (i < 6) and (yes == false); i++) {
        hours = miles / MPH[i];
        // cout << "hours" <<  hours << endl;

        totalLeak = leak * hours;
        // cout <<"totalLeak" << totalLeak << endl;

        gallonsHave = halftank - totalLeak;
        // cout << "gallonsHave" << gallonsHave << endl;


        gallonsToGetThere = miles / MPG[i];
        // cout << "gallonstoGet" << gallonsToGetThere << endl;
        if (gallonsHave > gallonsToGetThere) {
            cout << "YES" << " " << MPH[i];
            yes = true;
        }
        

    }
    if (yes == false) {
        cout << "NO";
    }
    



    
    

    

    return 0;
}