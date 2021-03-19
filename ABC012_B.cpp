#include <bits/stdc++.h>
using namespace std;

string two_digit(int n) {
  if (n < 10)
    return "0" + to_string(n);
  else
    return to_string(n);
}

int main() {
  int N, h, m, s;
  string hh, mm, ss;
  cin >> N;
  h = N / 3600;
  m = (N - 3600 * h) / 60;
  s = (N - 3600 * h - 60 * m);

  hh = two_digit(h);
  mm = two_digit(m);
  ss = two_digit(s);

  cout << hh << ":" << mm << ":" << ss << endl;
}