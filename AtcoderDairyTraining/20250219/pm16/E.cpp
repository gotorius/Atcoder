#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

string toBase5(long long n) {
    if (n == 0) return "0";
    string res;
    while (n > 0) {
        res.push_back('0' + (n % 5)); // 余りを文字に変換して追加
        n /= 5;
    }
    reverse(res.begin(), res.end()); // 逆順にして正しい桁順に
    return res;
}

int main(void){
    ll n;
    cin >> n;
    n--;
    string ans = toBase5(n);
    rep(i,ans.size()){
        ans[i] = (ans[i] - '0') * 2 + '0';
    }
    cout << ans << endl;
}
