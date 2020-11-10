#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> W(N);
  for (int i = 0; i < N; i++) {
    cin >> W.at(i);
  }

  int diff;
  for (int i = 0; i < N; i++) {
    int s1 = 0, s2 = 0;

    for (int j = 0; j < i + 1; j++) {
      s1 += W.at(j);
    }

    for (int j = i + 1; j < N; j++) {
      s2 += W.at(j);
    }

    if (i == 1) {
      diff = abs(s1 - s2);
    } else {
      diff = min(diff, abs(s1 - s2));
    }
  }
  cout << diff << endl;
}