#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i).first;
    A.at(i).second = i;
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    if (A.at(N - 1).second == i) {
      cout << A.at(N - 2).first << endl;
    } else {
      cout << A.at(N - 1).first << endl;
    }
  }
}