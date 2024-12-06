#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    rep(i,h){
        int j = 0;
        while(j < w-1){
            if(s[i][j] == 'T' && s[i][j+1] == 'T'){
                s[i][j] = 'P';
                s[i][j+1] = 'C';
                j += 2;
            }else{
                j++;
            }
        }
    }
    rep(i,h){
        cout << s[i] << endl;
    }
}