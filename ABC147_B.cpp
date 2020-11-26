#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  string R = S;
  reverse(R.begin(), R.end());

  int count = 0;
  for (int i = 0; i < (S.size() + 1) / 2; i++) {
    if (R.at(i) != S.at(i)) {
      count++;
    }
  }
  cout << count << endl;
}