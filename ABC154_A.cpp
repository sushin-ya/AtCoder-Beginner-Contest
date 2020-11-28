#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T, U;
  cin >> S >> T;
  int A, B;
  cin >> A >> B;
  cin >> U;

  if (S == U)
    cout << --A << " " << B << endl;
  else
    cout << A << " " << --B << endl;
}