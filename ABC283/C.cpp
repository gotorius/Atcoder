#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int now = 0;
    int ans = 0;
    while(now < n){
        if(s[now] == '0' && s[now+1] == '0'){
            ans++;
            now += 2;
        }else{
            now++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
   
}