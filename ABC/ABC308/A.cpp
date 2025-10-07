#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> s(8);
    rep(i,8) cin >> s[i];
    if(s[0] >= 100 && s[7] <= 675){
        rep(i,7){
            if(s[i+1] < s[i] || s[i+1]%25 != 0){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;   
}
