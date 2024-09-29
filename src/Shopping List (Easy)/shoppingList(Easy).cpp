#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    size_t lists, listSize;
    map <string, size_t> items;

    cin >> lists >> listSize;
    string word;

    for (size_t i = 0; i < lists; ++i) {
       for (size_t j = 0; j < listSize; ++j) {

           cin >> word; 
           if (items.find(word) != end(items)) {
               ++items[word];
           } else {
               items[word] = 1;
           }
       }
    }

    int all {0};
    for(auto x: items) {
        if (x.second == lists) {
            all += 1;
        }
    }

    cout << all << endl;

    for(auto x: items) {
        if (x.second == lists) {
            cout << x.first << endl;
        }
    }

    return 0;
}