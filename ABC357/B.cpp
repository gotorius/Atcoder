#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
    int o = 0, k = 0;
    string s;
    cin >> s; 

    rep(i, s.size()){
        if (isupper(s[i])) {
            o++;
        } else if (islower(s[i])) {
            k++;
        }
    }

    if (o > k) {
        rep(i, s.size()) {
            s[i] = toupper(s[i]);
        }
    } else {
        rep(i, s.size()) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
