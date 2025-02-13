#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    vector<P> qp(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    rep(i,n) qp[i] = {q[i],p[i]};
    
    sort(qp.begin(), qp.end());
    rep(i,n){
        cout << q[qp[i].second-1] << ' ';
    }
    cout << endl;
    return 0;

   
}