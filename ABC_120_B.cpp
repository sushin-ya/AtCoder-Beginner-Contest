#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> s;

  for (int i = 1; i < 100 + 1; i++) {
    if (A % i == 0 && B % i == 0) {
      s.push_back(i);
    }
  }

  cout << s.at(s.size() - K) << endl;
}