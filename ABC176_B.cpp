#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int sum = 0;
  for (int i = 0; i < N.size(); i++) {
    sum += N.at(i) - 48 ;
  }
  cout << (sum % 9 == 0 ? "Yes" : "No") << endl;
}