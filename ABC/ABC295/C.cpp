#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(),a.end());
    int now = 0, cnt = 0;
    while(now < n-1){
        if(a[now] == a[now+1]){
            cnt++;
            now += 2;
        }else{
            now++;
        }
    }
    cout << cnt << endl;
    return 0;
}