// WAとTLEのオンパレード
#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

// 入力
int N, Q;
vector<bool> seen;
vector<int> counter;

// 深さ優先探索
void dfs(const Graph &G, int p, int x) {
  seen[p] = true;  // p を訪問済にする
  counter[p] += x;

  // p から行ける各頂点 next_p について
  for (auto next_p : G[p]) {
    if (seen[next_p]) continue;  // next_p が探索済だったらスルー
    dfs(G, next_p, x);           // 再帰的に探索
  }
}

int main() {
  cin >> N >> Q;
  counter.resize(N);

  // グラフ入力受取 (ここでは無向グラフを想定)
  Graph G(N);
  for (int i = 0; i < N - 1; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    G[a].push_back(b);
  }
  vector<int> p(Q), x(Q);
  for (int i = 0; i < Q; i++) {
    int a, b;
    cin >> a >> b;
    p[i] = --a;
    x[i] = b;
  }

  // 頂点 0 をスタートとした探索
  for (int i = 0; i < Q; i++) {
    seen.assign(N, false);  // 全頂点を「未訪問」に初期化
    dfs(G, p[i], x[i]);  // 探索でたどり着いた頂点のカウンターに加算
  }

  for (int i = 0; i < N; i++) cout << counter[i] << " ";
  cout << endl;
}