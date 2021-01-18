#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++) cin >> s.at(i);

  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j >= 0; j--) {
      cout << s.at(j).at(i);
    }
    cout << endl;
  }
}