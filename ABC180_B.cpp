#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t man = 0, euk = 0;
  int cheb = 0;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    man += abs(x);
    euk += abs(x) * (int64_t)abs(x);  //型に注意
    cheb = max(cheb, abs(x));
  }
  cout << man << endl;
  cout << fixed << setprecision(15) << sqrt(euk) << endl;
  cout << cheb << endl;
}