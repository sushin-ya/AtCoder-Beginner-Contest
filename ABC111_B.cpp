#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  /// 111
  /// 110
  /// 112
  /// 100
  /// 121
  if (N.at(0) == N.at(1)) {
    if (N.at(0) == N.at(2)) {
      cout << N << endl;
    } else if (N.at(0) < N.at(2)) {
      int x = stoi(N);
      x /= 100;
      ++x;
      cout << x * 100 + x * 10 + x << endl;
    } else {
      cout << N.at(0) << N.at(0) << N.at(0) << endl;
    }
  } else if (N.at(0) < N.at(1)) {
    int x = stoi(N);
    x /= 100;
    ++x;
    cout << x * 100 + x * 10 + x << endl;
  } else {
    cout << N.at(0) << N.at(0) << N.at(0) << endl;
  }
}