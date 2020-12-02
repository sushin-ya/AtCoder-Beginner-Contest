#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  for (int i = 0; i < X + 1; i++) {
    if (2 * i + (X - i) * 4 == Y) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}