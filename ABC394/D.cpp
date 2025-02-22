#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;

    int n = s.size();
    int now = 0;
    map<char,int> mp;
    while(now < n){
        if(s[now] == '('){
            string t = "(";
            mp['(']++;
            while(mp['('] != mp[')']){
                now++;
                t.push_back(s[now]);
                mp[now]++;
            }
            string t2 = t;
            reverse(t.begin(), t.end());
            if(t2 == t){
                now++;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
        else if(s[now] == '<'){
            string t = "<";
            mp['<']++;
            while(mp['<'] != mp['>']){
                now++;
                t.push_back(s[now]);
                mp[now]++;
            }
            string t2 = t;
            reverse(t.begin(), t.end());
            if(t2 == t){
                now++;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
        else if(s[now] == '['){
            string t = "[";
            mp['[']++;
            while(mp['['] != mp[']4']){
                now++;
                t.push_back(s[now]);
                mp[now]++;
            }
            string t2 = t;
            reverse(t.begin(), t.end());
            if(t2 == t){
                now++;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }

    }
}
