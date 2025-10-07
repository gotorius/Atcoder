#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;

    map<int,int> mp;
    vector<int> a(m);
    rep(i,m){
        cin >> a[i];
        mp[a[i]] = i;
    }

    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<int> score(n);
    rep(i,n) score[i] = i+1;
    int mscore = 0;
    rep(i,n){
        rep(j,m){
            if(s[i][j] == 'o') score[i] += a[j];
        }
        mscore = max(mscore, score[i]);
    }


    rep(i,n){
        if(score[i] == mscore){
            cout << 0 << endl;
        }else{
            vector<int> order;
            rep(j,m){
                if(s[i][j] == 'x') order.push_back(a[j]);
            }
            sort(order.rbegin(), order.rend());
            int cnt = score[i];
            int ans = 0;
            for(auto p : order){
                cnt += p;
                ans++;
                if(cnt > mscore){
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0;
}