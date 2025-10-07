#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    map<int,int> mp;
    rep(i,n) {
        int s, t;
        cin >> s >> t;
        mp[s] = t;
    }

    while(1){
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(mp.find(it->second) != mp.end()) continue;
            else{
                mp.erase(it);
                mp[it->second] = -1;
            }
        }
    }

   
}