#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> ans(6);
  for (int i = 0; i < S.length(); i++) {
    if (S.at(i) == 'A')
      ++ans.at(0);
    else if (S.at(i) == 'B')
      ++ans.at(1);
    else if (S.at(i) == 'C')
      ++ans.at(2);
    else if (S.at(i) == 'D')
      ++ans.at(3);
    else if (S.at(i) == 'E')
      ++ans.at(4);
    else if (S.at(i) == 'F')
      ++ans.at(5);
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans.at(i);
    if (i != ans.size() - 1) cout << " ";
  }
  cout << endl;
}