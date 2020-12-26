#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> a(H);
  for (int h = 0; h < H; h++) cin >> a.at(h);
  for (int h = 0; h < H; h++) {
    if (h == 0) {
      for (int w = 0; w < W + 2; w++) cout << "#";
      cout << endl;
    }

    cout << "#" << a.at(h) << "#" << endl;

    if (h == H - 1) {
      for (int w = 0; w < W + 2; w++) cout << "#";
      cout << endl;
    }
  }
}