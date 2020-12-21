#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a, b, c, d;
  a = s.at(0) - 48;
  b = s.at(1) - 48;
  c = s.at(2) - 48;
  d = s.at(3) - 48;

  int N = 3;
  string str;
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<3> s(tmp);
    int res = 0;
    char op1, op2, op3;
    if (s.test(0)) {
      op1 = '+';
      res += a + b;
    } else {
      op1 = '-';
      res += a - b;
    }
    if (s.test(1)) {
      op2 = '+';
      res += c;
    } else {
      op2 = '-';
      res -= c;
    }
    if (s.test(2)) {
      op3 = '+';
      res += d;
    } else {
      op3 = '-';
      res -= d;
    }
    if (res == 7) {
      str = to_string(a) + op1 + to_string(b) + op2 + to_string(c) + op3 +
            to_string(d) + "=7";
    }
  }
  cout << str << endl;
}