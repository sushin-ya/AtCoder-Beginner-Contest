#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  S = S.substr(0, S.size() - 1);
  while (1) {
    string front, back;
    front = S.substr(0, S.size() / 2);
    back = S.substr(S.size() / 2, S.size() / 2);

    if (S.size() % 2 == 0 && front == back) break;
    S = S.substr(0, S.size() - 1);
  }
  cout << S.size() << endl;
}