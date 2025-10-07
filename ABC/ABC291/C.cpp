#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    map<P,int> g;
    g[{x,y}]++;
    rep(i,n){
        if(s[i] == 'R') x++; 
        if(s[i] == 'L') x--;
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;
        
        if(g.find({x,y}) == g.end()){
            g[{x,y}]++;
        }else{
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}