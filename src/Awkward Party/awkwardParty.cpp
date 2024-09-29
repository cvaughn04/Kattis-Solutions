#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    size_t guests;
    map <int, int> items;

    cin >> guests;
    int language;
    int awkwardness = guests;

    for (int i = 0; i < guests; ++i) {
           cin >> language; 
           if (items.find(language) != end(items)) {
            if (i - items[language] < awkwardness) {
                awkwardness = i - (items[language]);
                items[language] = i;  
            }            
           } else {
               items[language] = i;
           }
       }
    cout << awkwardness;

    return 0;
}