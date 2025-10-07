#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    
    bool q1 = false;
    int l = -1, r = 0;
    rep(i, s.size()){
        if(s[i] == 'B' && l == -1){
            l = i+1;
        }
        if(s[i] == 'B' && l != -1){
            r = i+1;
        }
    }
    if((l+r)%2 == 1) q1 = true;

    bool q2 = false;
    int now = 0;
    while(s[now] != 'R'){
        now++;
    }
    now++;
    while(s[now] != 'R'){
        if(s[now] == 'K'){
            q2 = true;
            break;
        }
        now++;
    }

    if(q1 && q2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}