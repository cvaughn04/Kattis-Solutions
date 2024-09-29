#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include<algorithm>

using namespace std;

bool checkValidity(string s);
bool validCheckSum(string s);
string makeISBN13(string s);

int main() {

    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (checkValidity(s)) {
            if (validCheckSum(s)) {
                cout << makeISBN13(s) << endl;
            } else {
                cout << "invalid" << endl;
            }
        } else {
            cout << "invalid" << endl;
        }
    }

    
    
    return 0;
}

bool checkValidity(string s) {
    bool valid = true;
    int hyphenCount = 0;
    int validCharCount = 0;

    if (s.length() < 10 or s.length() > 13) {
        valid = false;
        // cout << "lenght fail    length" << s.length() <<  endl;
    }

    if (s[0] == '-' or s[s.length() - 1] == '-') {
        valid = false;
        // cout << "end/start fail" << endl;

    }

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '-') {
            ++hyphenCount;
        } else if (isdigit(s[i]) or s[s.length()-1] == 'X') {
            ++validCharCount;
        }
        if (i != s.length()-1) {
            if (!isdigit(s[i])) {
                if (s[i] != '-') {
                        valid = false;                
                } 
            }
        } else {
            if (!isdigit(s[i])) {
                if (s[i] != 'X') {
                        valid = false;                
                } 
            }
        }

        if (s[i] == '-' and s[i+1] == '-') {
            valid = false;
            // cout << "back to back hyphen" << endl;

        }
    }

    if (hyphenCount > 3) {
        valid = false;
        //  cout << "too many hyphen" << endl;

    } else if (hyphenCount == 3) {
        if (s[s.length() - 1 - 1] != '-') {
            valid = false;
            // cout << "hyphen not at end before checksum" << endl;

        }
    }

    if (validCharCount != 10) {
        valid = false;
    }

    return valid;
}

bool validCheckSum(string s) {
    vector<int> vec;
    int count = 0;
    bool valid = true;

    s.erase(remove(s.begin(), s.end(), '-'), s.end());
    // cout << "string " << s << endl;

    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            vec.push_back(s[i] - '0');
        } else {
            vec.push_back(10);
        }
    }


    int j = 10;
    int tmp;

    for (int i = 0; i < 10; ++i) {
        count +=  (j * vec[i]);
        --j;
    }
    //  cout << count << endl;

    if (count % 11 != 0) {
        valid = false;
    }

    return valid;
}

string makeISBN13(string s) {
    vector<int> vec;
    int count = 0;
    bool valid = true;
    string prepend = "978-";
    s = prepend + s;
    string scopy = s;


    s.erase(remove(s.begin(), s.end(), '-'), s.end());
    // cout << "string " << s << endl;

    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            vec.push_back(s[i] - '0');
        } else {
            vec.push_back(10);
        }
    }

    int tmp;

    for (int i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            count += vec[i];
        } else {
            count += 3 * vec[i];
        }
    }
    //  cout << count << endl;

    int rem = count % 10;
    vec[vec.size() - 1] += (10-rem);
    vec[vec.size() - 1] %= 10;

    string a = to_string(vec[vec.size() -1]);
    scopy.replace(scopy.size() - 1, 1, a);
    return scopy;
}