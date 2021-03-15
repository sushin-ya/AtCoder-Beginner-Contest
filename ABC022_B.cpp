#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  map<int, int> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }
  for (auto itr = A.begin(); itr != A.end(); ++itr) {
    ans += itr->second - 1;
  }
  cout << ans << endl;
}
