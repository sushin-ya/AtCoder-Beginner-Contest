#include <bits/stdc++.h>
using namespace std;

// sortして、0,1番目と2,3番目を比べるだけで良い
int main() {
  string S;
  cin >> S;
  map<char, int> mp;
  for (int i = 0; i < S.size(); i++) {
    mp[S.at(i)] += 1;
  }

  bool tf = true;
  if (mp.size() == 2) {
    for (int i = 0; i < mp.size(); i++) {
      if (mp[S.at(i)] == 2) {
        continue;
      } else {
        tf = false;
      }
    }
  } else {
    tf = false;
  }

  cout << (tf ? "Yes" : "No") << endl;
}