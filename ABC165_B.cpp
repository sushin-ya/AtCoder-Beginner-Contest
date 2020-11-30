#include <bits/stdc++.h>
using namespace std;

int main() {
  uint64_t X;
  cin >> X;

  uint64_t x = 100, year = 0;
  while (x < X) {
    x += x / 100;
    year++;
    // cout << X << " " << x << " " << year << endl;
  }
  cout << year << endl;
}