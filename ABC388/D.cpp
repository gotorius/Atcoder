#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b;
    rep(i,n) cin >> a[i];

    rep(i,n){
        a[i] += i;
        a[i] -= (n - i  - 1); 
        if(a[i] < 0){
            
            b.push_back(-a[i]);
        }
    }

    rep(i,n) cout << a[i] << " ";
    cout << endl;
    sort(b.begin(), b.end());
    rep(i,b.size()) cout << b[i] << " ";
    cout << endl;
    queue<int> q;
    rep(i,b.size()) q.push(b[i]);
    rep(i,n){
        a[n-i-1] -= q.size();
        rep(j,q.size()){
            while(!(q.front()-i-1) > 0){
                q.pop(); 
            }
            break;
        }
        if(q.size() == 0) break;
    }

    rep(i,n){
        if(a[i] < 0) a[i] = 0;
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
   
}