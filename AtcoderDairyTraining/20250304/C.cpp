#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int q;
    cin >> q;
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int k, x;
            cin >> k >> x;
            a[k-1] = x;
        }else if(num == 2){
            int k;
            cin >> k;
            cout << a[k-1] << endl;
        }
    }
    return 0;

}
