#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, string>;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int n = 5;
    string s = "ABCDE";

    auto f = [&](const string& m) {
        int p = 0;
        for (char x : m) {
            if (x == 'A') p += a;
            else if (x == 'B') p += b;
            else if (x == 'C') p += c;
            else if (x == 'D') p += d;
            else if (x == 'E') p += e;
        }
        return p;
    };

    vector<P> ans;
    int total_combinations = 1 << n;
    for (int bit = 0; bit < total_combinations; ++bit) {
        string subset;
        for (int i = 0; i < n; ++i) {
            if (bit & (1 << i)) {
                subset.push_back(s[i]);
            }
        }
        int score = f(subset);
        ans.push_back({score, subset});
    }

    sort(ans.begin(), ans.end(), [](const P& a, const P& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    for (const auto& p : ans) {
        cout << p.second << endl;
    }
    return 0;
}
