#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;
  int a = A.at(0) + A.at(1) + A.at(2) - '0' * 3,
      b = B.at(0) + B.at(1) + B.at(2) - '0' * 3;
  cout << (a > b ? a : b) << endl;
}