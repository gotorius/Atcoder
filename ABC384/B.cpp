#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> d(n), a(n);
    rep(i,n){
        cin >> d[i] >> a[i];
        if(d[i] == 1){
            if(r >= 1600 && r < 2800){
                r += a[i];
            }
        }else{
            if(r >= 1200 && r < 2400){
                r += a[i];
            }
        }
    }

    cout << r << endl;
    return 0;

}