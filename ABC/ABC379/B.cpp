#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int now = 0;
    int ans = 0;
    while(now <= n - k){
        int cnt = 0;
        rep(i,k){
            if(s[now+i] == 'O'){
                cnt++;
            }
        }
        if (cnt == k) {
            ans++;
            now += k;
        } else {
            now++;
        }
    }
    cout << ans << endl;
    return 0;
   
}
