#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s, t;
    cin >> s >> t;
    map<char, int> sm;
    map<char, int> tm;

    rep(i,s.size()){
        sm[s[i]]++;
        tm[t[i]]++;
    }

    rep(i,s.size()){
        if(s[i] == '@'){
            continue;
        }else if(tm.find(s[i]) != tm.end() && tm[s[i]] != 0){
            tm[s[i]]--;
        }else{
            if(s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r'){
                if(tm.find('@') != tm.end() && tm['@'] != 0){
                    tm['@']--;
                }else{
                    cout << "No" << endl;
                    return 0;
                }
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }

    rep(i,t.size()){
        if(t[i] == '@'){
            continue;
        }else if(sm.find(t[i]) != sm.end() && sm[t[i]] != 0){
            sm[t[i]]--;
        }else{
            if(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'){
                if(sm.find('@') != sm.end() && sm['@'] != 0){
                    sm['@']--;
                }else{
                    cout << "No" << endl;
                    return 0;
                }
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;   
}
