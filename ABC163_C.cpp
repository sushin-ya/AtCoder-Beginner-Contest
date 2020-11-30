#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N - 1; i++) {
    int a;
    cin >> a;
    A.at(--a)++;
  }

  for (int i = 0; i < N; i++) cout << A.at(i) << endl;
}