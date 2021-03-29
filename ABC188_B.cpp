#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> B.at(i);
  }
  for (int i = 0; i < N; i++) {
    ans += A.at(i) * B.at(i);
  }
  cout << (ans == 0 ? "Yes" : "No") << endl;
}