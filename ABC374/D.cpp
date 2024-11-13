#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

struct P {
    int x, y;
    P(int x = 0, int y = 0) : x(x), y(y) {} // コンストラクタ追加
};

struct Line {
    P a, b;
    Line() : a(P()), b(P()) {} // デフォルトコンストラクタ追加
    Line(P p1, P p2) : a(p1), b(p2) {} // 2つの点を指定するコンストラクタ
};

// 2点間の距離を計算する関数
double dist(P a, P b) {
    double dx = a.x - b.x, dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int n, s, t;
    cin >> n >> s >> t;
    vector<Line> lines(n);

    // 入力処理
    rep(i, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        lines[i] = Line(P(a, b), P(c, d));
    }

    double ans = 1e18;
    vector<int> x(n);
    rep(i, n) x[i] = i;

    // 全ての順列を試す
    do {
        rep(dirs, 1 << n) {
            double now = 0;
            P pos{0, 0};
            rep(i, n) {
                int dir = dirs >> i & 1;
                P a = lines[x[i]].a, b = lines[x[i]].b;
                if (dir) swap(a, b);
                now += dist(pos, a) / s;
                now += dist(a, b) / t;
                pos = b;
            }
            ans = min(ans, now);
        }
    } while (next_permutation(x.begin(), x.end()));

    printf("%.10f\n", ans);
    return 0;
}
