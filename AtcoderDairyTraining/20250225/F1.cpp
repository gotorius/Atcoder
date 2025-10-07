#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string t;
    cin >> n >> t;
    
    vector<int> ans;
    for (int idx = 1; idx <= n; idx++){
        string s;
        cin >> s;
        int lenS = s.size(), lenT = t.size();
        
        // 1. 同一の場合
        if(s == t){
            ans.push_back(idx);
            continue;
        }
        
        // 2. 長さが同じなら、1文字だけ違う（置換）
        if(lenS == lenT){
            int diff = 0;
            for (int i = 0; i < lenS; i++){
                if(s[i] != t[i]) {
                    diff++;
                    if(diff > 1) break;
                }
            }
            if(diff == 1) ans.push_back(idx);
        }
        // 3. s の方が1文字長い場合 → s から1文字削除すれば t になる（削除）
        else if(lenS == lenT + 1){
            int diff = 0;
            int i = 0, j = 0;
            while(i < lenS && j < lenT){
                if(s[i] == t[j]){
                    i++; j++;
                } else {
                    diff++;
                    i++; // s の余分な1文字をスキップ
                    if(diff > 1) break;
                }
            }
            // ループ後、s の残りがあればカウント
            diff += (lenS - i);
            if(diff == 1) ans.push_back(idx);
        }
        // 4. s の方が1文字短い場合 → s に1文字挿入すれば t になる（挿入）
        else if(lenS == lenT - 1){
            int diff = 0;
            int i = 0, j = 0;
            while(i < lenS && j < lenT){
                if(s[i] == t[j]){
                    i++; j++;
                } else {
                    diff++;
                    j++; // t の余分な1文字をスキップ
                    if(diff > 1) break;
                }
            }
            // ループ後、t の残りがあればカウント
            diff += (lenT - j);
            if(diff == 1) ans.push_back(idx);
        }
    }
    
    cout << ans.size() << "\n";
    for (auto &x : ans) cout << x << " ";
    cout << "\n";
    
    return 0;
}
