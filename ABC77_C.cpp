#include <bits/stdc++.h>
using namespace std;

// https://scrapbox.io/ganariya/AtCoderBeginnerContest077_C%E5%95%8F%E9%A1%8C300%E7%82%B9_%E3%80%8CSnuke_Festival%E3%80%8D_(copy)
// ３つの変化がある場合は、中央を固定するといいことがある
// https://qiita.com/ganariya/items/33f1326154b85db465c3

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  for (int i = 0; i < N; i++) cin >> B.at(i);
  for (int i = 0; i < N; i++) cin >> C.at(i);
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());

  int64_t res = 0;

  for (int i = 0; i < N; i++) {
    int64_t pre = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin(); // Aの中でB[i]より小さい個数
    int64_t over = C.end() - upper_bound(C.begin(), C.end(), B.at(i)); // Cの中でB[i]より大きい個数
    res += pre * over;
  }
  cout << res << endl;
}