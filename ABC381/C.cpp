#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    auto f = [&](int a) {
        int b = a - 1;
        int c = a + 1;
        int cnt = 1;
        while (b >= 0 && c < n && s[b] == '1' && s[c] == '2') {
            b--;
            c++;
            cnt+=2;
        }
        return cnt;
    };

    int ans = 1;
    rep(i, n) {
        if (s[i] == '/') {
            ans = max(ans, f(i));
        }
    }

    cout << ans << endl;
    return 0;
}