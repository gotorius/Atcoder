#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int count = 0;
    vector<int> a(4);
    map<int, int> m;
    rep(i,4) cin >> a[i];
    rep(i,4) m[a[i]]++;
    for(auto p : m){
        if(p.second == 2){
            count++;
        }else if(p.second == 4){
            count = 2;
        }else if(p.second == 3){
            count++;
        }
    }
    cout << count << endl;
    return 0;

   
}
