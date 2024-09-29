#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t bricks;
    cin >> bricks;
    
    vector<int> vec;
    int towers = 1;
    int temp;
    cin >> temp;
    vec.push_back(temp);
    

    
    for (size_t i = 1; i < bricks; ++i) {
        cin >> temp;
        vec.push_back(temp);
        if (vec[i] > vec[i-1]) {
            ++towers;
        }
        
    }
    
   cout << towers; 
    
    
    return 0;
}