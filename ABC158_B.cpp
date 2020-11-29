#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N, A, B, div, rem;
  cin >> N >> A >> B;

  div = N / (A + B);
  rem = N % (A + B);

  if (rem <= A) {
    cout << A * div + rem << endl;
  } else {
    cout << A * (div + 1) << endl;
  }
}