#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    rep(i,n){
        if(i+1 < n && a[i+1] - a[i] > 1){
            cout << a[i] << ' ';
            rep(j,a[i+1]-a[i]-1){
                cout << a[i]+j+1 << ' ';
            }
        }else if(i+1 < n && a[i+1] - a[i] < -1){
            cout << a[i] << ' ';
            rep(j,a[i]-a[i+1]-1){
                cout << a[i]-j-1 << ' ';
            }
        }else{
            cout << a[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}
