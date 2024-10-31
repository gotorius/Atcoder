#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    rep(i,n){
        rep(j,n){
            if(i != j){
                string r = s[i]+s[j];
                reverse(r.begin(), r.end());
                if(r == s[i]+s[j]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;   
}
