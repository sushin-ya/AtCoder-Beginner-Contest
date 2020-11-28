#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false;

  int sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int X;
  cin >> X;
  for (int i = X; i < 100004; i++) {
    if (isPrime(i)) {
      cout << i << endl;
      break;
    }
  }
}