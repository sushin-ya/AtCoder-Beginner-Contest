#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  vector<char> atcoder = {'a', 't', 'c', 'o', 'd', 'e', 'r', '@'};

  for (int i = 0; i < S.length(); i++) {
    if (S.at(i) != T.at(i)) {
      if (S.at(i) == '@') {
        bool tf = false;
        for (int j = 0; j < 8; j++) {
          tf = tf || T.at(i) == atcoder.at(j);
        }
        if (!tf) {
          cout << "You will lose" << endl;
          return 0;
        }
      } else if (T.at(i) == '@') {
        bool tf = false;
        for (int j = 0; j < 8; j++) {
          tf = tf || S.at(i) == atcoder.at(j);
        }
        if (!tf) {
          cout << "You will lose" << endl;
          return 0;
        }
      } else {
        cout << "You will lose" << endl;
        return 0;
      }
    }
  }
  cout << "You can win" << endl;
}