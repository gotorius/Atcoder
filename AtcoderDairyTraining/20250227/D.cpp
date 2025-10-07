#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    rep(i,2001){
        bool ok = true;
        rep(j,n){
            if(i == a[j]) ok = false;
        }
        if(ok){
            cout << i << endl;
            return 0;
        }
    }
    return 0;

}