#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    vector<int> cnt(h);
    rep(i,h)rep(j,w) cin >> s[i][j];
    int m = 1001001001;
    int num;

    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#'){
                cnt[i]++;
            }
        }

        if(cnt[i] != 0 && m > cnt[i]){
            m = cnt[i];
            num = i;
        }

    }

    rep(i,w){
        if(num+1 < h){
            if(s[num+1][i] == '#' && s[num][i] == '.'){
                cout << num+1 << ' ' << i+1 << endl;
                return 0;
            }
        }
        if(num-1 >= 0){
            if(s[num-1][i] == '#' && s[num][i] == '.'){
                cout << num+1 << ' ' << i+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}
