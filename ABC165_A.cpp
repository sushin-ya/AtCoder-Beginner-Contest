#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, A, B;
  cin >> K;
  cin >> A >> B;
  for (int i = A; i < B + 1; i++) {
    if (i % K == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
}