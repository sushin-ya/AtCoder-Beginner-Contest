#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  int ans = 0;
  if (A >= K) {
    cout << K << endl;
  } else if (A + B >= K) {
    cout << A << endl;
  } else {
    K -= A + B;
    cout << A - K << endl;
  }
}