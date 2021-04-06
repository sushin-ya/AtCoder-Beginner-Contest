#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, mini = 100000;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        mini = min(mini, A.at(i) + B.at(j));

      } else {
        mini = min(mini, max(A.at(i), B.at(j)));
      }
    }
  }
  cout << mini << endl;
}