#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int n, k, x;
vector<string> s;
vector<string> ans;

void dfs(string cur, int depth) {
    if(depth == k) {
        ans.push_back(cur);
        return;
    }
    rep(i, n) {
        dfs(cur + s[i], depth + 1);
    }
}

int main(void){
    cin >> n >> k >> x;
    s.resize(n);
    rep(i,n) cin >> s[i];

    dfs("", 0);

    sort(ans.begin(), ans.end());
    cout << ans[x-1] << endl;
    return 0;
}