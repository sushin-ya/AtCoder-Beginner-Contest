#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  mp["AC"] = 0;
  mp["WA"] = 0;
  mp["TLE"] = 0;
  mp["RE"] = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }

  cout << "AC x " << mp["AC"] << endl;
  cout << "WA x " << mp["WA"] << endl;
  cout << "TLE x " << mp["TLE"] << endl;
  cout << "RE x " << mp["RE"] << endl;
}