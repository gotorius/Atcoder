#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    int m = 1e9, x = 0;
    rep(i,n){
        cin >> s[i] >> a[i];
        if(m > a[i]){
            m = a[i];
            x = i;
        }
    }
    int count = 0;
    while(count < n){
        cout << s[x] << endl;
        count++;
        x++;
        if(x == n) x = 0;
    }
    return 0;   
}
