#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, ans;
  cin >> A >> B >> C;
  ans = C - (A - B);
  cout << (ans > 0 ? ans : 0) << endl;
}