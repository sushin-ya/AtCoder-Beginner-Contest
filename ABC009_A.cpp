#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  cout << (N % 2 == 0 ? N / 2 : N/2+1) << endl;
}