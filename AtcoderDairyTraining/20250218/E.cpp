#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    map<int, int> mp;
    rep(i,n){
        a[i] = i+1;
        mp[a[i]] = i;
    }
    
    rep(i,q){
        int x;
        cin >> x;
        if(mp[x] != n-1){
            int tmp = mp[x];
            mp[x]++;
            mp[a[tmp+1]]--;
            swap(a[tmp],a[tmp+1]);
        }else{
            int tmp = mp[x];
            mp[x]--;
            mp[a[tmp-1]]++;
            swap(a[tmp],a[tmp-1]);
        }
    }
    rep(i,n) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
