#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//3　AtCoder Beginner Contest 122 B - ATCoder

int main(void){
    string s;
    cin >> s;
    int ans = 0;
    int now = 0;
    rep(i,s.size()){
        if(s[i] == 'A' || s[i] == 'T' || s[i] == 'C' || s[i] == 'G'){
            now++;
            ans = max(ans, now);
        }else{
            now = 0;
        }
    }
    cout << ans << endl;
    return 0;
}