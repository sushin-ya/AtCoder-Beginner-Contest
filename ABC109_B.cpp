#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  set<string> st;
  for (int i = 0; i < N; i++) {
    cin >> W.at(i);
    st.insert(W.at(i));
  }

  bool tf = true;
  for (int i = 0; i < N - 1; i++) {
    if (W.at(i).at(W.at(i).size() - 1) != W.at(i + 1).at(0)) {
      tf = false;
    }
  }
  if (st.size() != N) tf = false;

  if (tf)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}