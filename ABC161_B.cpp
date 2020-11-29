#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    sum += A.at(i);
  }
  int res = 0;
  for (int i = 0; i < N; i++) {
    if ((double)A.at(i) >= (double)sum / (4 * M)) res++;
  }

  if (res >= M)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}