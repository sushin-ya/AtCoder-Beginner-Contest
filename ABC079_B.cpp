#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int64_t> L;
  L.push_back(2);
  L.push_back(1);
  for (int i = 2; i < N + 1; i++) {
    L.push_back(L.at(i - 2) + L.at(i - 1));
  }
  cout << L.at(N) << endl;
}