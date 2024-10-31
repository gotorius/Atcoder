#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(7*n);
    vector<int> sum(n+1);

    int count = 0;
    rep(i,7*n){
        if(i%7 == 0) count++;
        cin >> a[i];
        sum[count] += a[i];
    }
    rep(i,n) cout << sum[i+1] << ' ';
    cout << endl;
    return 0;
   
}
