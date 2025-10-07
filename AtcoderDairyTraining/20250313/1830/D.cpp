#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(4*n-1);
    rep(i,4*n-1) cin >> a[i];
    map<int,int> mp;
    rep(i,4*n-1) mp[a[i]]++;
    for(auto p : mp){
        if(p.second == 3){
            cout << p.first << endl;
            return 0;
        }
    }
    return 0;
}