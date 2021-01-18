#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, ans;
  cin >> A >> B >> C;
  if (A > B) swap(A, B);
  ans = C / A;
  C %= A;
  ans += C / B;
  cout << ans << endl;
}