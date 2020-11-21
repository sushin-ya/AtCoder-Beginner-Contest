#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> p.at(i);
    if (p.at(i) != i + 1) {
      cnt++;
    }
  }
  cout << (cnt == 0 || cnt == 2 ? "YES" : "NO") << endl;
}