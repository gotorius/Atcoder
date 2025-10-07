#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    int n = s.size();
    string x = "";
    int now = 0;
    int ans = 0;
    rep(i,n){
        if(now % 2 == 0){
            if(s[i] == 'i'){
                now++;
            }else{
                now += 2;
                ans++;
            }
        }else{
            if(s[i] == 'i'){
                now += 2;
                ans++;
            }else{
                now++;
            }
        }
    }
    if(now % 2 == 1) ans++;
    cout << ans << endl;
    return 0;
}
