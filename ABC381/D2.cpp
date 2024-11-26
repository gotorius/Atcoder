#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    
    int cnt = 0, ans = 0, r = 0, l = 1;
    map<int, int> m;
    queue<int> q;

    
    while(r < n){
        while(r < n){
            if(a[r] != a[r+1]) break;
            if(m.find(a[r]) != m.end()){
                cnt -= 2;
                m.erase(q.front());
                q.pop();
            }else{
                cnt += 2;
                m[a[r]]++;
                q.push(a[r]);
                r += 2;
                ans = max(ans, cnt);
            }
        }
        r += 2;
        m.clear();
        q = queue<int>();
        cnt = 0;
    }

    m.clear();
    q = queue<int>();
    cnt = 0;

    while(l < n){
        while(l < n){
            if(a[l] != a[l+1]) break;
            if(m.find(a[l]) != m.end()){
                cnt -= 2;
                m.erase(q.front());
                q.pop();
            }else{
                cnt += 2;
                m[a[l]]++;
                q.push(a[l]);
                l += 2;
                ans = max(ans, cnt);
            }
        }
        l += 2;
        m.clear();
        q = queue<int>();
        cnt = 0;
    }

    cout << ans << endl;
    return 0;
}
