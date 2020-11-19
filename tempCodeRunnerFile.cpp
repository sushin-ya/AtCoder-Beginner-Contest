#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int64_t, int64_t>> hs(N);
  for (int i = 0; i < N; i++) cin >> hs.at(i).first >> hs.at(i).second;

  sort(hs.begin(), hs.end());
  cout << hs.at(0).first + hs.at(0).second * (N - 1) << endl;
}