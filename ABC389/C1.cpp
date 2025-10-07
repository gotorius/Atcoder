#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int q;
    cin >> q;

    vector<ll> sn;
    vector<ll> sumn;
    ll sum = 0;
    ll outl = 0;
    ll cnt = 0;

    rep(i,q){
        int n;
        cin >> n;
        if(n == 1){
            ll l;
            cin >> l;
            sn.push_back(l);
            sumn.push_back(sum);
            sum += l;

        }else if(n == 2){
            outl += sn[cnt];
            cnt++;
        }else if(n == 3){
            int k;
            cin >> k;
            cout << sumn[k-1+cnt] - outl << endl;
        }
    }
    return 0;
   
}