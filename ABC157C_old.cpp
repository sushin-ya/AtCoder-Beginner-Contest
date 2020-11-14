// ありえるパターンをすべて試す
#include <bits/stdc++.h>
using namespace std;

int digitv(int x, int M, vector<pair<int, int> > sc) {
  for (int i = 0; i < M; i++) {
    switch (sc.at(i).first) {
      case 1:
        if ((x / 100) != 0 && (x / 100) % 10 == sc.at(i).second) {
          break;
        } else {
          return -1;
        }
      case 2:
        if ((x / 10) != 0 && (x / 10) % 10 == sc.at(i).second) {
          break;
        } else {
          return -1;
        }
      case 3:
        if ((x / 1) != 0 && (x / 1) % 10 == sc.at(i).second) {
          break;
        } else {
          return -1;
        }
    }
  }
  return x;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<pair<int, int> > sc(M);

  for (int i = 0; i < M; i++) {
    cin >> sc.at(i).first >> sc.at(i).second;
  }

  int ans = -1;
  for (int i = 0; i < 1000; i++) {
    if (digitv(i, M, sc) > 0) {
      ans = digitv(i, M, sc);
      break;
    }
  }
  cout << ans << endl;
}