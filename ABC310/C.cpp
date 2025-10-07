#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> rs(n);
    map<string, int> m;
    rep(i,n){
        cin >> s[i];
        rs[i] = s[i];
        reverse(rs[i].begin(), rs[i].end());
        if(m.find(s[i]) == m.end() && m.find(rs[i]) == m.end()){
            m[s[i]]++;
        }
    }
    int count = 0;
    for(auto p : m) count++;
    cout << count << endl;
    return 0;
}
