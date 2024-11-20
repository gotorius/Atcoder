#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    map<int,int> a;
    int cnt = 0;
    rep(i,m){
        cin >> l[i] >> r[i];
        if(a.find(l[i]) != a.end()){
            if(a[l[i]] > r[i]){
                a[l[i]] = r[i];
            }
            cnt++;
        }else{
            a[l[i]] = r[i];
        }
    }
    sort(l.begin(), l.end());


    int ans = 0;
    int li = 0;
    int ri = 0;
    rep(pos,m){
        if(pos <= l[li]){
            ans += l[li];
            ans += r[ri] - l[li];
        }else if(pos > l[li]){
            li++;
        }else if(pos > r[ri]){
            ri++;
        }
    }




}

