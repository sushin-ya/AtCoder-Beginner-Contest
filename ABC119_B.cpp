#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  double ans = 0;
  for (int i = 0; i < N; i++) {
    string x, u;
    cin >> x >> u;
    if (u == "JPY") {
      ans += stoi(x);
    } else {
      ans += 380000.0 * stod(x);
    }
  }
  cout << fixed << setprecision(15)<< ans << endl;
}