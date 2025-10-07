#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int a = 0, b = 0, c = 0, d = 0;
    int now = 0;
    rep(i,h)rep(j,w){
        if(s[i][j] == 'o' && now == 0) a = i, b = j, now++;
        if(s[i][j] == 'o' && now == 1) c = i, d = j;
    }

    int ans = abs(a-c) + abs(b-d);
    cout << ans << endl;
    return 0;
    }