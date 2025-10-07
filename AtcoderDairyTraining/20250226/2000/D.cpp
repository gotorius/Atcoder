#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s = "wbwbwwbwbwbw";
    int w, b;
    cin >> w >> b;
    rep(i,s.size()){
        int wn = 0, bn = 0;
        rep(j,w+b){
            if(s[(i+j)%12] == 'w') wn++;
            else bn++;
        }
        if(wn == w && bn == b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}