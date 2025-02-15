#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int f(int n){
    return (n+1)*n/2;
};

int main(void){
    int n;
    string s;
    cin >> n >> s;
    vector<int> d;

    rep(i,n){
        if(s[i] == '1') d.push_back(i);
    }

    int m;
    ll ans = 0;
    int ds = d.size();
    if(ds%2 == 1){
        m = d[ds/2];
        for(auto p : d){
            if(p == m) continue;
            ans += abs(p-m)-1; 
        }
        ans -= 2*f(((ds-1)/2)-1);
    }else {
        int x = d[(ds/2)]-d[ds/2-1];
        x = x/2;
        m = d[ds/2-1]+x;

        for(auto p : d){
            ans += abs(p-m)-1; 
        }
        ans -= 2*f((ds/2)-1);
        ans += ds/2;
    }
    cout << ans << endl;   
    return 0;

}