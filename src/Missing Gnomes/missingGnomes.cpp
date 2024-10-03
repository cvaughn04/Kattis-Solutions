#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> gnomes;
    vector<int> sortedGnomes;


    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        gnomes.push_back(temp);
        sortedGnomes.push_back(temp);

    }

    sort(sortedGnomes.begin(), sortedGnomes.end());

    int gnomePos = 0;
    vector<int> p;
    vector<int> newP;



    for (int i = 1; i < n + 1; ++i) {
        p.push_back(i);
        if (sortedGnomes[gnomePos] == i) {
            ++gnomePos;
        } else {
            newP.push_back(i);
        }
    }
    sort(newP.begin(), newP.end());


    int tempPos = 0;
    int pPos = 0;

    for (int i = 0; i < n; i++) {
        if (tempPos < m && (pPos >= n - m || gnomes[tempPos] < newP[pPos])) {
            cout << gnomes[tempPos] << endl;
            ++tempPos;
        } else if (pPos < n - m) {
            cout << newP[pPos] << endl;
            ++pPos;
        }      
    }



    return 0;
}