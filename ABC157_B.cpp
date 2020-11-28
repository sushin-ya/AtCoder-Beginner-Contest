#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> A(3, vector<int>(3));
vector<vector<int>> res(3, vector<int>(3));

void checkNum(int num) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (num == A.at(i).at(j)) {
        res.at(i).at(j) = 1;
      }
    }
  }
}

int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A.at(i).at(j);
      res.at(i).at(j) = 0;
    }
  }
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int b;
    cin >> b;
    checkNum(b);
  }

  vector<int> ans(8);
  for (int i = 0; i < 3; i++) ans.at(0) += res.at(0).at(i);
  for (int i = 0; i < 3; i++) ans.at(1) += res.at(1).at(i);
  for (int i = 0; i < 3; i++) ans.at(2) += res.at(2).at(i);
  for (int i = 0; i < 3; i++) ans.at(3) += res.at(i).at(0);
  for (int i = 0; i < 3; i++) ans.at(4) += res.at(i).at(1);
  for (int i = 0; i < 3; i++) ans.at(5) += res.at(i).at(2);
  ans.at(6) = res.at(0).at(0) + res.at(1).at(1) + res.at(2).at(2);
  ans.at(7) = res.at(0).at(2) + res.at(1).at(1) + res.at(2).at(0);

  for (int i = 0; i < ans.size(); i++) {
    if (ans.at(i) == 3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}