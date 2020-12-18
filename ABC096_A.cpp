#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (b < a)
    cout << --a << endl;
  else
    cout << a << endl;
}