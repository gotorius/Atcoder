#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> skill(n,false);
    map<int, set<int>> mp;
    rep(i,n){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(a == -1 && b == -1) skill[i] = true;
        else{
            mp[a].insert(i);
            mp[b].insert(i);
        }
    }

    rep(i,n){
        if(skill[i]){
            for(auto p : mp[i]){
                skill[p] = true;
            }
        }
    }


}