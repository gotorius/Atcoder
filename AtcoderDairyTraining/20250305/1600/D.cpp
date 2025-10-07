#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;



int main(void){
    vector<string> s(8);
    string abc = "abcdefgh";
    rep(i,8) cin >> s[i];

    int x, y;
    rep(i,8){
        rep(j,8){
            if(s[i][j] == '*'){
                x = i;
                y = j;
            }
        }
    }
    cout << abc[y] << 8-x << endl;
    return 0;
}