#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.length(); i++) {
    string s;
    if (i == 0) {
      s = toupper(S.at(i));
    } else {
      s = tolower(S.at(i));
    }
    cout << s;
  }
  cout << endl;
}