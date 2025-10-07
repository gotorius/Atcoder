#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int cnt = 1;
    map<char,int> m;
    char now;
    if(s[0] == 'R') now = 'P';
    if(s[0] == 'S') now = 'R';
    if(s[0] == 'P') now = 'S';

    rep(i,n-1){
        if(s[i+1] == 'R'){
            if(now != 'P'){
                now = 'P';
                cnt++;
            }else{
                now = 'R';
            }
        }
        
        if(s[i+1] == 'S' ){
            if(now != 'R'){
                now = 'R';
                cnt++;
            }else{
                now = 'S';
            }
        }

        if(s[i+1] == 'P'){
            if(now != 'S'){
                now = 'S';
                cnt++;
            }else{
                now = 'P';
            }
        }
    }
    cout << cnt << endl;
    return 0;

}
