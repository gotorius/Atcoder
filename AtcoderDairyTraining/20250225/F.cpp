#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    string t;
    cin >> n >> t;

    vector<int> a;
    rep(i,n){
        string s;
        cin >> s;

        if(s == t){
            a.push_back(i+1);
            continue;
        }

        if(s.size() == t.size()){
            int cnt = 0;
            rep(i,s.size()){
                if(s[i] == t[i]) continue;
                else if(s[i] != t[i] && cnt == 0) cnt++;
                else cnt++;
            }
            if(cnt == 1) a.push_back(i+1);
        }

        if(s.size() == t.size()+1){
            int cnt = 0, now = 0;
            rep(i,s.size()){
                if(s[now] == t[i]) now++;
                else if(s[now] != t[i] && cnt == 0 && s[now+1] == t[i]) cnt++, now += 2;
                else cnt++, now++;
            }
            if(cnt <= 1) a.push_back(i+1);
        }

        if(s.size() == t.size()-1){
            int cnt = 0, now = 0;
            rep(i,s.size()){
                if(s[i] == t[now]) now++;
                else if(s[i] != t[now] && cnt == 0 && s[i] == t[now+1]) cnt++, now += 2;
                else cnt++, now++;
            }
            if(cnt <= 1) a.push_back(i+1);
        }   
    }

    cout << a.size() << endl;
    rep(i,a.size()) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
