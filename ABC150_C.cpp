#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
    P.at(i)--;
  }
  for (int i = 0; i < N; i++) {
    cin >> Q.at(i);
    Q.at(i)--;
  }

  // 初期順列
  vector<int> order(N);
  for (int i = 0; i < N; ++i) order.at(i) = i;

  // 探索
  int a, b, cnt = 0;
  do {
    bool Ptf = true, Qtf = true;
    cnt++;
    for (int i = 0; i < N; i++) {
      if (order.at(i) != P.at(i)) {
        Ptf = false;
      }
      if (order.at(i) != Q.at(i)) {
        Qtf = false;
      }
    }

    if (Ptf) {
      a = cnt;
    }
    if (Qtf) {
      b = cnt;
    }
  } while (next_permutation(order.begin(), order.end()));

  cout << abs(a - b) << endl;
}