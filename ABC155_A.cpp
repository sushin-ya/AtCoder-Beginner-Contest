#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  bool ans = (A == B && A != C) || (A == C && A != B) || (A != C && B == C);
 
  if (ans)
    cout << "Yes" << endl;
  else

    cout << "No" << endl;
}