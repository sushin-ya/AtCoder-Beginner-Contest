#include <bits/stdc++.h>
using namespace std;

// https://www.hamayanhamayan.com/entry/2020/02/16/230827
// 純粋にmapと最大値を計算して、valueが最大値と一致するものを出力

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }

  vector<pair<int, string>> v;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    v.push_back({it->second, it->first});
  }
  sort(v.begin(), v.end());

  set<string> ans;
  ans.insert(v.at(v.size() - 1).second);

  for (int i = v.size() - 1; i > 0; i--) {
    if (v.at(i).first == v.at(i - 1).first) {
      ans.insert(v.at(i - 1).second);
    } else {
      break;
    }
  }

  for (auto itr = ans.begin(); itr != ans.end(); ++itr) {
    cout << *itr << endl;
  }
}