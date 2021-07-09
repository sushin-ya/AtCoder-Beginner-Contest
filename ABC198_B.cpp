#include <bits/stdc++.h>
using namespace std;

int main() {
  string N, R;
  cin >> N;
  for (int i = N.size() - 1; i > 0; i--) {
    if (N.at(i) == '0')
      N = N.substr(0, N.size() - 1);
    else
      break;
  }
  R = N;
  reverse(R.begin(), R.end());
  cout << (N == R ? "Yes" : "No") << endl;
}