#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  for (int i = 1; i < 4; i++) {
    if ((A * B * i) % 2 != 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}