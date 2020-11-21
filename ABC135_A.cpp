#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = -1;
  for (int i = 0; i < max(A, B); i++) {
    if (abs(A - i) == abs(B - i)) {
      ans = i;
    }
  }

  cout << (ans != -1 ? to_string(ans) : "IMPOSSIBLE") << endl;
}