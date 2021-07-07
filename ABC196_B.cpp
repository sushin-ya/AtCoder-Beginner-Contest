#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;
  int p = X.find(".");
  if (p != -1) {
    X.replace(p, X.length() - p, "");
  }
  cout << X << endl;
}