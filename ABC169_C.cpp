#include <bits/stdc++.h>
using namespace std;

int main() {
  uint64_t A;
  double B, B_i, B_f;
  cin >> A >> B;
  B_i = floor(B);
  B_f = (B - B_i + 0.001) * 100;
  cout << A * (uint64_t)B_i + (A * (uint64_t)B_f) / 100 << endl;
}