#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    rep(i,n){
        if(s[i] == '|'){
            int now = i+1;
            while(s[now] != '|' && now < n){
                if(s[now] == '*'){
                    cout << "in" << endl;
                    return 0;
                }
                now++;
            }
            cout << "out" << endl;
            return 0;
        }
    }
    return 0;
   
}