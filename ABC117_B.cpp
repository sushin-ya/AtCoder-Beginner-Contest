#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) cin >> L.at(i);
  sort(L.begin(), L.end());

  int res = 0;
  for (int i = 0; i < N - 1; i++) res += L.at(i);
  cout << (L.at(N - 1) < res ? "Yes" : "No") << endl;
}