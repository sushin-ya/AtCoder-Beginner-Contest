#include <bits/stdc++.h>
using namespace std;

// https://qiita.com/rute_not_route/items/1ef68deeb1037410ebf0
// 全探索

int main() {
  string S, T;
  cin >> S >> T;
  vector<string> ls(S.size() - T.size() + 1);
  for (int i = 0; i < S.size() - T.size() + 1; i++) {
    ls.at(i) = S.substr(i, T.size());
  }
  int now = 0;
  int minimum = T.size();
  for (int i = 0; i < S.size() - T.size() + 1; i++) {
    now = 0;
    for (int j = 0; j < T.size(); j++) {
      if (T.at(j) == ls.at(i).at(j)) {
        now++;
      }
    }
    if (T.size() - now < minimum) {
      minimum = T.size() - now;
    }
  }
  cout << minimum << endl;
}