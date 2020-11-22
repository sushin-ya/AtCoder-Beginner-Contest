#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int N;
  cin >> N;
  int H[N];
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }
  for (int i = 1; i < N; i++) {
    if (H[i - 1] > H[i]) {
      cout << "No\n";
      return 0;
    } else {
      if (H[i] != H[i - 1]) {
        H[i] = H[i] - 1;
      }
    }
  }
  cout << "Yes\n";
  return 0;
}