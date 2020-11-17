#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  vector<int> t(N);

  int sum = 0, absmin, minv;
  for (int i = 0; i < N; i++) {
    t.at(i) = L + i;
    sum += t.at(i);

    if (i == 0) {
      absmin = abs(t.at(i));
      minv = t.at(i);
    } else {
      if (absmin > abs(t.at(i))) {
        absmin = abs(t.at(i));
        minv = t.at(i);
      }
    }
  }

  cout << sum - minv << endl;
}