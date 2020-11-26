#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) + N > 90) {
      printf("%c", S.at(i) + N - 26);
    } else {
      printf("%c", S.at(i) + N);
    }
  }
  cout << endl;
}