#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        if(a[i] % 2 == 0){
            cout << a[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}