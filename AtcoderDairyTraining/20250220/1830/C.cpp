#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;

    vector<int> c(n);
    vector<set<int>> a(n);
    rep(i,n){
        cin >> c[i];
        rep(j,c[i]){
            int ca;
            cin >> ca;
            a[i].insert(ca);
        }
    }
    int x;
    cin >> x;

    vector<P> ans;
    rep(i,n){
        if(a[i].count(x)){
            ans.push_back(P(i+1, a[i].size()));
        }
    }

    sort(ans.begin(), ans.end(), [](P a, P b){
        if(a.second == b.second){
            return a.first < b.first;
        }else{
            return a.second < b.second;
        }
    });

    if(ans.size() == 0){
        cout << 0 << endl;
        return 0;
    }
    int m = ans[0].second;
    int now = 0;

    vector<int> res;
    while(ans[now].second == m){
        res.push_back(ans[now].first);
        now++;
    }
    cout << res.size() << endl;
    for(int i : res){
        cout << i << ' ';
    }
    cout << endl;
    return 0;


}