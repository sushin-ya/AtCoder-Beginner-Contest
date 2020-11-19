#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int train = N * A, taxi = B;
  cout << min(train, taxi) << endl;
}