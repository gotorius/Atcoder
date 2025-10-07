#include "../my_header.hpp"
#define rep(i,n) for(int i=0; i<(n); i++)
using P = pair<int,int>;



P func(const string &a, char target){
    int ml = 0, mr = 0, cnt = 0;
    int l = 0, r = 1;
    while(r < (int)a.size()){
        if(a[l] == a[r]) r++;
        else{
            if(a[l] == target && cnt < r - l){
                ml = l;
                mr = r - 1;
                cnt = r - l;
            }
            l = r;
            r++;
        }
    }
    if(a[l] == target && cnt < r - l){
        ml = l;
        mr = r - 1;
    }
    return {ml, mr};
}

int calc(const string &s, char c){
    int n = s.size();
    P p = func(s, c);
    int ans = 0;
    for(int i = 0; i < p.first; i++)
        ans += (s[i] == c ? 2 : 1);
    for(int i = p.second + 1; i < n; i++)
        ans += (s[i] == c ? 2 : 1);
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ans = min(calc(s, '0'), calc(s, '1'));
        cout << ans << endl;
    }
}

