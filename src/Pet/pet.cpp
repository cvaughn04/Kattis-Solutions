#include <iostream>
#include <string>

using namespace std;

int main () {
  
    int nums[20];
    int current;
    int n;
    int count1, count2, count3, count4, count5;
    int printcount;
    int winner;


    for (int i = 0; i < 20; i++){
        cin >> current;
        nums[i] = current;
    }

    for (int i = 0; i < 4; i++) {
        n = nums[i];
        count1 += n;
    }
    for (int i = 4; i < 8; i++) {
        n = nums[i];
        count2 += n;
    }
    for (int i = 8; i < 12; i++) {
        n = nums[i];
        count3 += n;
    }
    for (int i = 12; i < 16; i++) {
        n = nums[i];
        count4 += n;
    }
    for (int i = 16; i < 20; i++) {
        n = nums[i];
        count5 += n;
    }

    if (count1 > count2) {
        printcount = count1;
        winner = 1;
    } else {
        printcount = count2;
        winner = 2;

    }
    if (printcount < count3) {
        printcount = count3;
                winner = 3;

    }
    if (printcount < count4) {
        printcount = count4;
                winner = 4;

    }
    if (printcount < count5) {
        printcount = count5;
                winner = 5;

    }

    cout << winner << " " << printcount;

    

    return 0;
}