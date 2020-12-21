#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> N(3);
  cin >> N.at(0) >> N.at(1) >> N.at(2);
  sort(N.begin(), N.end());
  if(N.at(0)==N.at(1)){
    cout << N.at(2) << endl;
  }else{
    cout << N.at(0) << endl;
  }
}