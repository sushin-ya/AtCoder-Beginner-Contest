#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;
  string str = "(^[0-9]{" + to_string(A) + "}-[0-9]{" + to_string(B) + "}$)";
  regex re(str);
  if (regex_match(S, re))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}