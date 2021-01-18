#include <bits/stdc++.h>
using namespace std;

int main() {
  u_int64_t A, B, C;
  const int INF = 1000000007;
  cin >> A >> B >> C;
  cout << A * B % INF * C % INF << endl;
}