#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<ll,vector<ll>> mp;
    rep(i,n){
        cin >> a[i] >> b[i];
        mp[b[i]].push_back(a[i]);
    }

    // メモ化用のマップ
    unordered_map<ll, bool> memo;

    // チェック関数
    auto check = [&](auto&& self, ll num) -> bool {
        // メモ化された結果を返す
        if (memo.find(num) != memo.end()) {
            return memo[num];
        }

        // ベースケース
        if (num == 1) {
            return memo[num] = true;
        }

        // num が mp に存在しない場合
        if (mp.find(num) == mp.end()) {
            return memo[num] = false;
        }

        // num に関連するすべての a[i] をチェック
        for (auto num1 : mp[num]) {
            if (self(self, num1)) {
                return memo[num] = true;
            }
        }

        // すべての num1 が条件を満たさない場合
        return memo[num] = false;
    };

    // b を降順にソート
    sort(b.rbegin(), b.rend());

    // チェックの実行
    rep(i,n){
        if (check(check, b[i])) {
            cout << b[i] << endl;
            return 0;
        }
    }

    // 条件を満たす b[i] が見つからなかった場合
    cout << 1 << endl;
    return 0;
}