#include <bits/stdc++.h>
using namespace std;

bool check(int num) {
  if (num % 2 != 0)
    return true;
  else {
    if (num % 3 == 0) {
      return true;
    } else if (num % 5 == 0) {
      return true;
    } else {
      return false;
    }
  }
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (!check(A)) {
      cout << "DENIED" << endl;
      return 0;
    }
  }
  cout << "APPROVED" << endl;
}