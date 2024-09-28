#include <iostream> 
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    
    for (int i = 0; i < cases; ++i) {
        int people;
        cin >> people;
        vector<float> scores;
        float total = 0;
        
        for (int i = 0; i < people; ++i) {
            float temp;
            cin >> temp;
            // cout << "Temp: " << temp << endl;
            scores.push_back(temp);
            total += temp;
        }
        
        float average = total / people;
        // cout << "Average: " << average << endl;
        float acedemicWeapons = 0;
        
        for (int i = 0; i < people; ++i) {
            if (scores[i] > average) {
                ++acedemicWeapons;
            }
        }
        
        float aboveAverage = acedemicWeapons / people;
        cout << fixed << setprecision(3) << aboveAverage * 100 << "%" << endl;

        
    }
    
    
    return 0;
}