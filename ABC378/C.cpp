#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    map<int,int> m;
    rep(i,n) cin >> a[i];
    rep(i,n){
        if(m.find(a[i]) == m.end()){
            m[a[i]] = i+1;
            b[i] = -1;
        }else{
            b[i] = m[a[i]];
            m[a[i]] = i+1;
        }
        cout << b[i] << ' ';
    }
    cout << endl;
    return 0;
   
}
