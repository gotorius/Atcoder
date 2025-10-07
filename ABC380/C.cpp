#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int kf = -1, ks = -1;
    int cnt = 0;
    rep(i, n - 1) {
        if (s[i] == '1' && s[i + 1] == '0') cnt++;
        if (s[i] == '1' && s[i + 1] == '0' && cnt == k - 1) kf = i + 1;
        if (cnt == k - 1 && s[i] == '0' && s[i + 1] == '1') ks = i + 1;
    }

    if (kf == -1 || ks == -1) {
        cout << s << endl;
        return 0;
    }

    int kks = ks;
    while (kks < n && s[kks] == '1') {
        kks++;
    }

    string ans = s;
    reverse(ans.begin() + kf, ans.begin() + kks);
    cout << ans << endl;

    return 0;
}
