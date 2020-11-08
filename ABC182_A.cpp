#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, ans;
  cin >> A >> B;
  ans = 2 * A + 100 - B;
  cout << ((ans > 0) ? ans : 0 )<< endl;
}