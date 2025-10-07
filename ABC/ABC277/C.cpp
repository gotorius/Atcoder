#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<ll,vector<ll>> mp;
    rep(i,n){
        cin >> a[i] >> b[i];
        mp[b[i]].push_back(a[i]);
    }
    sort(b.rbegin(), b.rend());

    auto check = [&](auto check, ll num){
        if(num == 1) return true;
        if(mp.find(num) != mp.end()){
            for(auto p : mp[num]){
                int num1 = p;
                check(check, num1);
            }
        }
        return false;
    };


    rep(i,n){
        if(check(check,b[i])){
            cout << b[i] << endl;
            return 0;
        }
    }
    return 0;
}