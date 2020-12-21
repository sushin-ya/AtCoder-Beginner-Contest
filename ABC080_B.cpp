#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;
  if (N % digitSum(N) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}