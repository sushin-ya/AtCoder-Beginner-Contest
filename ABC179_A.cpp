#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  cout << (S.at(S.size()-1) == 's' ? S + "es" : S + "s") << endl;
}