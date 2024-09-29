#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    size_t people;
    map <string, size_t> costumes;

    cin >> people;
    string category;
    cin.ignore();


    for (size_t i = 0; i < people; ++i) {
           getline(cin, category);

           if (costumes.find(category) != end(costumes)) {
               ++costumes[category];
           } else {
               costumes[category] = 1;
           }
       }
    
    size_t low = people;
        for(auto x: costumes) {
        if (x.second <= low) {
           low = x.second;
        }
    }


    for(auto x: costumes) {
        if (x.second == low) {
            cout << x.first;
            cout << endl;
        }
    }

    return 0;
}