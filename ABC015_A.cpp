#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;
  cout << (A.length() > B.length() ? A : B) << endl;
}