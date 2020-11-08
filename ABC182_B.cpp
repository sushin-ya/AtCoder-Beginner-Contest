#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int ans, anscnt = 0;
  for (int i = 2; i < 1000 + 1; i++) {
    int cnt = 0;
    for (int j = 0; j < N; j++) {
      if (A.at(j) % i == 0) {
        cnt++;
      }
    }
    if (anscnt < cnt) {
      anscnt = cnt;
      ans = i;
    //   cout << anscnt << " " << ans << endl;
    }
  }

  cout << ans << endl;
}