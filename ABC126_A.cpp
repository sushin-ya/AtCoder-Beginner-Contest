#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string s;

  cin >> N >> K >> s;

  for (int i = 0; i < N; i++) {
    if (i == K - 1) {
      s.at(i) = tolower(s.at(i));
    }
  }

  cout << s << endl;
}