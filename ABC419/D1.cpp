#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> a(n+1,0);
    rep(i,m){
        int l, r;
        cin >> l >> r;
        l--;
        a[l] += 1;
        a[r] -= 1;
    }

    rep(i,n-1) a[i+1] += a[i];    # 1. 統合先レポジトリのディレクトリへ移動
    cd /path/to/target-repo
    
    # 2. 統合元レポジトリをリモート追加
    git remote add repoA https://github.com/ユーザー名/レポジトリA.git
    git fetch repoA
    
    # 3. サブディレクトリに履歴ごと統合
    git merge repoA/main --allow-unrelated-histories
    mkdir repoA
    git mv * repoA/  # 必要に応じてファイルを移動
    git commit -m "Move repoA files to subdirectory"
    
    # 4. 不要なリモートを削除
    git remote remove repoA
    
    # 5. 他のレポジトリも同様に繰り返す
    rep(i,n){
        if(a[i]%2 == 0) cout << s[i];
        else cout << t[i];
    }
    cout << endl;
    return 0;
}