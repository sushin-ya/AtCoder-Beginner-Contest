#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (a % b == 0 ? 0 : b - a % b) << endl;
}