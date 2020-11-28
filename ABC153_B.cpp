#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, N;
  cin >> H >> N;
  int64_t res = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    res += a;
  }

  if (res >= H)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}