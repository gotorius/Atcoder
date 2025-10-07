#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){

    string abc = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    map<char,int> mp;
    rep(i,27){
        mp[abc[i]] = i;
    }

    rep(i,t){
        int n;
        string s;
        cin >> n >> s;
        int l = 0;
        while(mp[s[l]] <= mp[s[l+1]]) l++;
        int r = l;
        while(mp[s[l]] >= mp[s[r+1]] && r < n-1) r++;
        reverse(s.begin()+l, s.begin()+r+1);
        reverse(s.begin()+l, s.begin()+r);
        cout << s << endl;        
    }
    return 0;
}