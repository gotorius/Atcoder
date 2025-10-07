#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    rep(i, n) cin >> l[i] >> r[i];

    vector<int> x = r;
    ll ans = 0;
    rep(i,n) ans += x[i];
    if(ans == 0){
        cout << "Yes" << endl;
        rep(i,n) cout << x[i] << " ";
        cout << endl;
        return 0;
    }else if(ans > 0){
        bool ok = false;
        rep(i,n){
            if(x[i]-l[i] < ans){
                ans -= x[i]-l[i];
                x[i] = l[i];
            }else{
                x[i] -= ans;
                ok = true;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            rep(i,n) cout << x[i] << " ";
            cout << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}