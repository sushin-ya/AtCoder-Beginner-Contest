#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int s = stoi(a + b);
  bool tf = false;
  for (int i = 1; i < 1001; i++) {
    if (s == i * i) {
      tf = true;
      break;
    }
  }

  if (tf)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}