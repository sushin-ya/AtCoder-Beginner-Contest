// bit全探索
#include <bits/stdc++.h>
using namespace std;

int N, M, X;
vector<int> C;
vector<vector<int>> A;

bool checksum(int border, int size, vector<int> s) {
  for (int i = 0; i < size; i++) {
    if (s.at(i) >= X) {
      continue;
    } else {
      return false;
    }
  }
  return true;
}

int main() {
  cin >> N >> M >> X;
  C.resize(N);
  A.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> C.at(i);
    A.at(i).resize(M);
    for (int j = 0; j < M; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int digi = 12, ans = 10000000;  //桁数, answer

  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<12> s(tmp);
    vector<int> sum(M);
    bool tf = true;
    int cost = 0;

    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        for (int j = 0; j < M; j++) {
          sum.at(j) += A.at(i).at(j);
        }
        cost += C.at(i);
      }
    }
    // cout << s << " " << cost << endl;

    if (checksum(X, M, sum)) {
      // cout << s << endl;
      ans = min(ans, cost);
    }
  }

  cout << (ans != 10000000 ? ans : -1) << endl;
}