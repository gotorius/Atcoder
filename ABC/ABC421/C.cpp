#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    string s;
    cin >> n >> s;

    set<int> a;
    set<int> b;
    rep(i,2*n){
        if(s[i] == 'A') a.insert(i);
        if(s[i] == 'B') b.insert(i);
    }

    int ans = 0, nowa = 0, nowb = 0;
    rep(i,2*n-1){
        if(s[i+1] == s[i]){
            if(s[i] == 'A'){

            }
        }
        else if(s[i] == 'A') nowa++;
        else if(s[i] == 'B') nowb++;
        
    }

}