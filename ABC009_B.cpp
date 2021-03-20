#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.insert(a);
  }

  auto itr = A.end();
  --itr;
  --itr;
  cout << *itr << endl;
}