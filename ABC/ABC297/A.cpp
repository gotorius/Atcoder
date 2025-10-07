#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i,n){
        cin >> t[i];
        if(i > 0){
            if(t[i] - t[i-1] <= d){
                cout << t[i] << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;   
}