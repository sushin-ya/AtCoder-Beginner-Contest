#include <iostream>
#include <vector>
using namespace std;

//https://drken1215.hatenablog.com/entry/2019/06/11/103300
//共通区間を考える問題。問題文の意味がわからん

int main() {
    int N, M; cin >> N >> M;
    int left = 1, right = N;
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        left = max(left, a);
        right = min(right, b);
    }
    cout << max(right - left + 1, 0) << endl;
}