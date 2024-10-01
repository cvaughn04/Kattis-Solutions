#include <bits/stdc++.h>
#define INF std::numeric_limits<int>::max()

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> people;
    vector<int> trees;
    map<int, int> choices;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        people.push_back(temp);
    }

    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        trees.push_back(temp);
    }

    sort (trees.begin(), trees.end());
    sort (people.begin(), people.end());

    for (int i = 0; i < n; ++i) {
        int closestTree = trees[0];
        int closestTreeDist = abs(trees[0] - people[i]);
        for (int j = 0; j < m; ++j) {
            if (abs(trees[j] - people[i]) < closestTreeDist) {
                closestTreeDist = abs(trees[j] - people[i]);
                closestTree = trees[j];
            }
        }
        // cout << people[i] << " " << closestTree << " " << closestTreeDist << endl;
        if (choices.find(closestTree) != end(choices)) {
            choices[closestTree]++;
        } else {
            choices[closestTree] = 1;
        }
    }

    cout << people.size() - choices.size();






    return 0;
}