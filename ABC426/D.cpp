#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

P func(string a){
    int ml, mr, cnt = 0;
    int l=0, r=1;
    while(r < a.size()){
        if(a[l] == a[r]) r++;
        else{
            if(cnt < r-l-1){
                ml = l;
                mr = r-1;
                cnt = r-l-1;
            }
            l = r;
            r++;
        }
    }

    if(cnt < r-l-1){
        ml = l;
        mr = r-1;
    }

    P ans = {ml,mr};
    return ans;
};

int main(void){
    int t;
    cin >> t;
    rep(i,t){
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;
        if(s[func(s).first] == '0'){
            for(int i = 0; i < func(s).first; i++){
                if(s[i] == '0') ans += 2;
                else ans++;
            }

            for(int i = func(s).second+1; i < n; i++){
                if(s[i] == '0') ans += 2;
                else ans++;
            }
        }else{
            for(int i = 0; i < func(s).first; i++){
                if(s[i] == '1') ans += 2;
                else ans++;
            }

            for(int i = func(s).second+1; i < n; i++){
                if(s[i] == '1') ans += 2;
                else ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}