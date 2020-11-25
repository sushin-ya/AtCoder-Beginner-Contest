#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> ans(N);
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    ans.at(--num) = i;
  };

  for (int i = 0; i < N; i++) cout << ++ans.at(i) << " ";
  cout << endl;
}