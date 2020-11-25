#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N - 1);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A.at(i)--;
  }
  for (int i = 0; i < N; i++) cin >> B.at(i);
  for (int i = 0; i < N - 1; i++) cin >> C.at(i);

  int res = B.at(A.at(0));
  for (int i = 1; i < N; i++) {
    res += B.at(A.at(i));
    if (A.at(i) - A.at(i - 1) == 1) {
      res += C.at(A.at(i - 1));
    }
  }

  cout << res << endl;
}