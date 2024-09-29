#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintGrille(const vector<vector<char>> &  grille) {
   for (size_t r = 0; r < grille.size(); ++r) {
      for (size_t c = 0; c < grille.size(); ++c) {
         cout << grille[r][c];
      }
      cout << endl;
   }
   cout << endl;
}

vector<vector<char>> RotateGrille(const vector<vector<char>> & grille) {
    auto rv = grille;

    size_t cols = grille.size() -1;
    for(size_t r =0; r < grille.size(); ++r) {
       for (size_t c = 0; c <  grille.size(); ++c) {
          rv[c][cols-r] = grille[r][c];
       }
    }

    return rv;

}

bool DecodeString(string line, size_t & currentPos, string & plainText,
string & covered, const vector<vector<char>> & grille) {
    for(size_t r =0; r < grille.size(); ++r) {
       for (size_t c = 0; c <  grille.size(); ++c) {
          if (grille[r][c] == '.') {
             size_t pos = r*grille.size() + c;
             plainText[pos] = line[currentPos];
             if (covered[pos] == 'X') {
                 cout << "invalid grille" << endl;
                 return false;
             } else {
                 covered[pos] = 'X';
             }
             currentPos++;
          }
       }
    }
    
    return true;
}
  
int main() {
   size_t size;

   cin >> size;

   if (size % 2 != 0) {
      cout << "invalid grille" << endl;
      
      return 0;
   }

   string  codeWord;

   vector<vector<char>> grille(size, vector<char>(size));

   for(size_t r =0; r < size; ++r) {
      for(size_t c = 0; c < size; ++c) {
          cin >> grille[r][c];
      }
   }

   cin >> codeWord;
   size_t currentPos = 0;
   string covered = codeWord;
   string plainText = codeWord; 

   for(size_t i = 0; i < 4; ++i) {
          if(not DecodeString(codeWord, currentPos, plainText, covered, grille)) {
              return 0;
          }
          grille = RotateGrille(grille);
   }

   covered = covered.substr(0,size*size);
   for (auto x: covered) {
     if (x != 'X') {
        cout << "invalid grille" << endl;
        return 0;
     }
   }
   cout << plainText << endl;

   return 0;
}