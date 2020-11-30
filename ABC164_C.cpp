#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> set;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    set.insert(s);
  }
  cout << set.size() << endl;
}