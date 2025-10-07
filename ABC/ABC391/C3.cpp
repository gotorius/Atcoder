#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n+1,1);
    map<int,int> mp;
    rep(i,n) mp[i+1] = i+1;

    int ans = 0;
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int p, h;
            cin >> p >> h;
            a[mp[p]]--;
            if(a[mp[p]] == 1) ans--;
            mp[p] = h;
            a[mp[p]]++;            
            if(a[mp[p]] == 2) ans++;
        }else if(num == 2){
            cout << ans << endl;
        }
    }
   
}