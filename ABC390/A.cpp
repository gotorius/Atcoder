#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> a(5);
    rep(i,5){
        cin >> a[i];
    }
    int cnt = 0;
    rep(i,5){
        if(a[i] == i+1) continue;
        if(a[i] != i+1 && cnt == 0){
            swap(a[i],a[i+1]);
            cnt++;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    if(cnt != 1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;   
}