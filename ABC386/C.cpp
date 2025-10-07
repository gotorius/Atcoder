#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int k;
    string s, t;
    cin >> k >> s >> t;
    map<char,int> m;

    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }

    if(s.size() < t.size()){
        int now = 0;
        int w = 0;
        rep(i,t.size()){
            if(s[now] == t[i]) now++;
            else w++;
        }
        if(w <= 1){
            cout << "Yes" << endl;
            return 0;
        }

    }

    if(s.size() > t.size()){
        int now = 0;
        int w = 0;
        rep(i,s.size()){
            if(t[now] == s[i]) now++;
            else w++;
        }
        if(w <= 1){
            cout << "Yes" << endl;
            return 0;
        }

    }

    int cnt = 0;
    if(s.size() == t.size()){
        rep(i,s.size()){
            if(s[i] != t[i]) cnt++;
        }
        if(cnt == 1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

   
}