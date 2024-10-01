#include <iostream>
#include <map>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    float total = 0;
    map<string, int> species;

    string current;
    while (getline(cin, current)) {
        if (current != "") {
            if (species.find(current) != end(species)) {
                species[current]++;
            } else {
                species[current] = 1;
            }
            total++;
        }
    }
  

    for (auto x: species) {
        float percent = (x.second / total); 
        cout << x.first << " " << setprecision(8) << (percent * 100.0) << endl;
    }



    return 0;
}