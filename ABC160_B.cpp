#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, gh, go;
  cin >> X;

  gh = X / 500;
  X %= 500;
  go = X / 5;

  cout << 1000 * gh + 5 * go << endl;
}