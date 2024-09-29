#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    size_t keywords;
    map <string, size_t> items;

    cin >> keywords;
    string word;
    cin.ignore();



    for (size_t i = 0; i < keywords; ++i) {
           getline(cin, word);

           for (size_t i = 0; i < word.length(); i++) {
                word[i] = tolower(word[i]);
                if (word[i] == '-') {
                    word[i] = ' ';
                }
           }

           if (items.find(word) != end(items)) {
               ++items[word];
           } else {
               items[word] = 1;
           }
    }
    
    cout << items.size();


    return 0;
}