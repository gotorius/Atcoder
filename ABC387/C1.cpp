#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    string l, r;
    cin >> l >> r;

    // 累積和を格納する2次元ベクトル
    vector<vector<ll>> s(10, vector<ll>(20, 0));
    for (int digit = 1; digit <= 9; digit++) {
        ll cumulative_sum = 0;
        for (int power = 1; power <= 19; power++) {
            cumulative_sum += pow(digit, power);
            s[digit][power] = cumulative_sum;
        }
    }

    auto calculate_sum = [&](const string& num) -> ll {
        ll result = 0;
        int n = num.size();
        for (int i = 0; i < n; i++) {
            int digit = num[i] - '0'; // 文字を数値に変換
            if (digit > 0) {
                result += s[digit][n - i - 1]; // 桁数に基づく累積和を加算
            }
        }
        return result;
    };

    // l と r の累積和を計算
    ll sum_l = calculate_sum(l);
    ll sum_r = calculate_sum(r);

    // 結果を出力
    cout << sum_r - sum_l << endl;
    return 0;
}
