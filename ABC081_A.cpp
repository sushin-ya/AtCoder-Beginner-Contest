#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int res = 0;
  if (s.at(0) == '1') res++;
  if (s.at(1) == '1') res++;
  if (s.at(2) == '1') res++;
  cout << res << endl;
}