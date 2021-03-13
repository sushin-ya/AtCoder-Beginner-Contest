#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = -1;
  string S, s = "b";
  cin >> N >> S;
  if (S == "b") ans = 0;
  for (int i = 1; i < 101; i++) {
    if (i % 3 == 1) {
      s = "a" + s + "c";
    } else if (i % 3 == 2) {
      s = "c" + s + "a";
    } else {
      s = "b" + s + "b";
    }

    if (S == s) ans = i;
  }
  cout << ans << endl;
}

/*
0       : b
1(3*0+1): (a)b(c)
2(3*0+2): (c)abc(a)
3(3*1)  : (b)cabca(b)
4(3*1+1):
5(3*1+2):
6(3*2)  :
*/