#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    int ans = 0;
    rep(i,s.size()){
        if(s[i] == 'A'){
            rep(j,(s.size()-i)/2){
                if(s[i+(j+1)] == 'B' && s[i+2*(j+1)] == 'C') ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;

}