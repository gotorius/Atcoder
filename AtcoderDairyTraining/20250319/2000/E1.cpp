#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    rep(i,m) cin >> a[i];

    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<int> score(n, 0);
    rep(i,n){
        score[i] = i + 1;
        rep(j,m){
            if(s[i][j] == 'o') score[i] += a[j];
        }
    }

    int mscore = *max_element(score.begin(), score.end());

    vector<int> order(m);
    rep(i,m) order[i] = i;
    sort(order.begin(), order.end(), [&](int x, int y) {
        return a[x] > a[y];
    });

    rep(i,n){
        if(score[i] == mscore){
            cout << 0 << endl;
            continue;
        }

        int cnt = score[i];
        int ans = 0;
        rep(j,m){
            int idx = order[j];
            if(s[i][idx] == 'x'){
                cnt += a[idx];
                ans++;
            }

            if(cnt > mscore){
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}