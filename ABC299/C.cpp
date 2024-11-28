#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int l = 0, r = n-1;
    int cnt = 0, ans = -1;
    while(l < n-1){
        if(s[l] == '-'){
            l++;
            while(s[l] == 'o'){
                cnt++;
                l++;
                ans = max(ans, cnt);
            }
            cnt = 0;
        }else{
            l++;
        }
    }

    while(r > 0){
        if(s[r] == '-'){
            r--;
            while(s[r] == 'o'){
                cnt++;
                r--;
                ans = max(ans, cnt);
            }
            cnt = 0;
        }else{
            r--;
        }
    }

    cout << ans << endl;
    return 0;
}