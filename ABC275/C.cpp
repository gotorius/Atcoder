#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    vector<string> s(9);
    rep(i,9) cin >> s[i];

    int ans = 0;
    auto f1 = [&](int i, int j){
        if(s[i][j] == '#'){
            for(int x = 1; x < 9; x++){
                if(i+x <= 8 && j+x <= 8){
                    if(s[i+x][j] == '#' && s[i][j+x] == '#' && s[i+x][j+x] == '#') ans++;
                }
            }
        }
    };

    auto f2 = [&](int i, int j){
        if(s[i][j] == '#'){
        }
    };

    rep(i,9){
        rep(j,9){
            f1(i,j);
        }
    }
    cout << ans << endl;
    return 0;
    

}
