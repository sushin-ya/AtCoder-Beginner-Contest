#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> d;

// index が条件を満たすかどうか
bool isOK(int index, int key) {
  if (d[index] >= key)
    return true;
  else
    return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key) {
  int left = -1;
  int right = (int)d.size();

  /* どんな二分探索でもここの書き方を変えずにできる！ */
  while (right - left > 1) {
    int mid = left + (right - left) / 2;

    if (isOK(mid, key))
      right = mid;
    else
      left = mid;
  }
  return right;
}

int main() {
  cin >> N;
  d.resize(N);
  for (int i = 0; i < N; i++) cin >> d.at(i);

  sort(d.begin(), d.end());

  int res = 0;
  for (int i = 1; i < 100001; i++) {
    int mid, mr, lm;
    mid = binary_search(i);
    mr = N - mid;
    lm = mid;
    if (mr == lm) {
      res++;
    }
  }
  cout << res << endl;
}