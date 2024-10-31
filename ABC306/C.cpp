#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(3*n);
    vector<int> ans;
    vector<int> b(n+1);
    int count = 0;
    rep(i,3*n){
        cin >> a[i];
        b[a[i]]++;
        if(b[a[i]] == 2){
            ans.emplace_back(a[i]);
        }
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;

}
