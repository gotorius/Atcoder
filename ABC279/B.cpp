#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s, t;
    cin >> s >> t;

    int sn = s.size();
    int tn = t.size();
    int now = 0;

    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }

    if(sn < tn){
        cout << "No" << endl;
        return 0;
    }

    rep(i, sn-tn+1){
        rep(j,tn){
            if(j == tn-1 && s[i+j] == t[j]){
                cout << "Yes" << endl;
                return 0;
            }
            if(s[i+j] == t[j]) continue;
            else break;
        }
    }
    cout << "No" << endl;
    return 0;
}