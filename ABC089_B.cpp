#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> st;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    st.insert(s);
  }
  if (st.size() == 3)
    cout << "Three" << endl;
  else
    cout << "Four" << endl;
}