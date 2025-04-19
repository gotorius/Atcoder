#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>> st(m);
    rep(i,m){
        int k;
        rep(j,k){
            int a;
            cin >> a;
            st[i].insert(a);
        }
    }

    vector<int> b(n);
    rep(i,n) cin >> b[i];

    vector<int> cnt(m, 0); // 各集合について何個一致したか
    set<int> seen;         // b[i] までに登場した要素
    int ans = 0;
    rep(i,n){
        seen.insert(b[i]);
        rep(j,m){
            if(st[j].count(b[i])) cnt[j]++;
            if(cnt[j] == st[j].size()){ // すべて含まれていたらカウント
                ans++;
                cnt[j] = -1; // 重複カウント防止
            }
        }
        cout << ans << endl;
    }
}
