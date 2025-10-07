#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int t;
    cin >> t;

    rep(x, t){
        int n;
        cin >> n;
        vector<int> a(2*n);
        map<int, vector<int>> mp;
        
        // 入力受け取り & インデックスの記録
        rep(i,2*n){
            cin >> a[i];
            mp[a[i]].push_back(i);
        }

        int ans = 0;
        for(int j = 0; j+1 < 2*n; j += 2){
            if(a[j] == a[j+1]) continue;  // すでにペアならスキップ
            
            int idx = mp[a[j]][1]; // j のペアの位置を取得
            if(idx == j+1) continue; // すでに隣接しているならスキップ
            
            // スワップ
            swap(a[j+1], a[idx]);
            ans++;

            // マップの更新
            auto &vec1 = mp[a[j]]; 
            vec1.erase(vec1.begin() + 1); // もともと a[j] の2番目にあった要素を削除
            
            auto &vec2 = mp[a[j+1]];
            auto it = find(vec2.begin(), vec2.end(), idx);
            if (it != vec2.end()) vec2.erase(it); // idx を削除
            
            vec2.push_back(j+1); // 新しい位置を追加
        }
        cout << ans << endl;
    }
    return 0;
}
