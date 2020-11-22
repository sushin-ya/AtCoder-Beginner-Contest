#include <bits/stdc++.h>
using namespace std;

// https://yamakasa.net/atcoder-abc-136-c/
//上の方がスッキリするけど、0番目が1番目より大きいときはだめじゃない

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) cin >> H.at(i);

  bool tf = true;
  int bef = 0;
  for (int i = 1; i < N; i++) {
    if (bef <= H.at(i - 1) && H.at(i - 1) <= H.at(i)) {
      continue;
    } else if (bef < H.at(i - 1) && H.at(i - 1) - H.at(i) == 1) {
      H.at(i - 1)--;
    } else {
      tf = false;
      break;
    }
    bef = H.at(i - 1);
  }

  cout << (tf ? "Yes" : "No") << endl;
}