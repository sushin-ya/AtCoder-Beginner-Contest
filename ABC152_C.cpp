#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  vector<bool> check(N, true);
  for (int i = 0; i < N; i++) cin >> P.at(i);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (P.at(j) < P.at(i)) {
        check.at(i) = false;
      }
    }
  }

  int count = 0;
  for (int i = 0; i < N; i++)
    if (check.at(i)) count++;

  cout << count << endl;
}