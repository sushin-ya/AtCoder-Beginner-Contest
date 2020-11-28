// 計算時間でTLE
#include <bits/stdc++.h>
using namespace std;

// めぐる式二分探索
// index が条件を満たすかどうか
bool isOK(vector<int> vec, int index, int key) {
  if (vec.at(index) > key)
    return true;
  else
    return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(vector<int> vec, int key) {
  int left = -1;
  int right = (int)vec.size();

  /* どんな二分探索でもここの書き方を変えずにできる！ */
  while (right - left > 1) {
    int mid = left + (right - left) / 2;

    if (isOK(vec, mid, key))
      right = mid;
    else
      left = mid;
  }
  return right;
}

void prep(int num, vector<int> &vec) {
  vec.resize(num);
  for (int i = 0; i < num; i++) {
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
}

int main() {
  int N;
  cin >> N;
  vector<int> A, B, C;
  prep(N, A);
  prep(N, B);
  prep(N, C);

  int res = 0;
  for (int i = 0; i < N; i++) {
    int aindex = binary_search(B, A.at(i));
    // cout << i << " " << aindex << " ";
    for (int j = aindex; j < N; j++) {
      int bres = N - binary_search(C, B.at(j));
      //   cout << bres << " ";
      res += bres;
    }
    // cout << endl;
  }

  cout << res << endl;
}