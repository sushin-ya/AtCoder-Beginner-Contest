#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, res = 0, pen = 0;
  cin >> N >> M;
  vector<bool> ans(N, false), check(N, false);
  vector<int> p(M);
  vector<string> S(M);

  for (int i = 0; i < M; i++) {
    cin >> p.at(i) >> S.at(i);
    p.at(i)--;
    if (S.at(i).at(0) == 'A') ans.at(p.at(i)) = true;
  }

  for (int i = 0; i < M; i++) {
    if (ans.at(p.at(i)) && !check.at(p.at(i))) {
      if (S.at(i).at(0) == 'W') {
        pen++;
      } else {
        check.at(p.at(i)) = true;
        res++;
      }
    }
  }

  cout << res << " " << pen << endl;
}