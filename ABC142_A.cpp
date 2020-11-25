#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 2 == 0) {
    cout << fixed << setprecision(10) << (double)N / 2 / N << endl;
  } else {
    cout << fixed << setprecision(10) << (double)(N + 1) / 2 / N << endl;
  }
}