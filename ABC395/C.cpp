#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    set<ll> st;
    rep(i,n){
        if(st.count(a[i])){
            if(i != n-1){
                cout << i+1 << endl;
                return 0;
            }
        }
        else st.insert(a[i]);
    }
    cout << -1 << endl;
    return 0;

}
