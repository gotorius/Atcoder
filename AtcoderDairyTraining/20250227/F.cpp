#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    bool ok = true;
    while(ok){
        rep(i,n-k){
            if(a[i] > a[i+k]){
                swap(a[i], a[i+k]);
                ok = true;
                break;
            }
            ok = false;
        }
    }


    rep(i,n-1){
        if(a[i] > a[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}