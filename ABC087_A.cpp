#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, X;
  cin >> X >> A >> B;
  X = X - A;
  X = X % B;
  cout << X << endl;
}