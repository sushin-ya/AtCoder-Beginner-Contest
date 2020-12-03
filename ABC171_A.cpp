#include <bits/stdc++.h>
using namespace std;

int main() {
  string alfa, beta;
  cin >> alfa;
  beta = alfa;
  transform(alfa.begin(), alfa.end(), alfa.begin(), ::toupper);
  cout << (alfa == beta ? "A" : "a") << endl;
}