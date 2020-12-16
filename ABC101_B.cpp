#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int res = 0, n = stoi(N);
  for (int i = 0; i < N.size(); i++) {
    res += N.at(i) - 48;
  }
  if (n % res == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}