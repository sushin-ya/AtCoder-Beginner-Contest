#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  bool tf = false;
  for (int i = 0; i < N; i++) {
    int d1, d2;
    cin >> d1 >> d2;
    if (d1 == d2) {
      cnt++;
      if (cnt == 3) {
        tf = true;
      }
    } else {
      cnt = 0;
    }
  }

  cout << (tf ? "Yes" : "No") << endl;
}